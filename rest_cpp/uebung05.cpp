#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>

/* #define SHOW_ARRAYS */

#ifdef SHOW_ARRAYS
#define MAX_SIZE 10
#else
#define MAX_SIZE 10000
#endif

using namespace std;
using namespace chrono;

typedef void (*const SFP)(int* const, const unsigned); // sorting-function pointer

enum Generation {ASCENDING, DESCENDING, RANDOM};

void _quick_sort(int* const, const int, const int);
void quick_sort(int* const, const unsigned);
void shell_sort(int* const, const unsigned);
void swap(int&, int&);

void benchmark(const SFP, const Generation, const unsigned);
void print_arr(const int* const, const unsigned);
bool is_sorted(const int* const, const unsigned);
int* generate(const unsigned, const Generation);

int main() {
  srand(time(0));
  
  const Generation gens[] = {ASCENDING, DESCENDING, RANDOM};
  const char* const gen_names[] = {"asc", "desc", "rand"};
  const SFP sorts[] = {&shell_sort, &quick_sort};
  const char* const sort_names[] = {"Shellsort", "Quicksort"};

  const unsigned AMT_SORTS = sizeof(sorts) / sizeof(sorts[0]);
  const unsigned AMT_GENS = sizeof(gens) / sizeof(gens[0]);

  for (unsigned n = 10; n <= MAX_SIZE; n *= 10) {
    cout << "Arraysize " << n << ":" << endl;
    for (unsigned iS = 0; iS < AMT_SORTS; iS++) {
      cout << "\u21aa " << sort_names[iS] << ":" << endl;
      for (unsigned iG = 0; iG < AMT_GENS; iG++) {
        cout << "  \u21aa " << gen_names[iG] << ": ";
        benchmark(sorts[iS], gens[iG], n);
      }
    }
    cout << endl;
  }

  return 0;
}

void benchmark(const SFP sort, const Generation gen, const unsigned size) {
  int* const arr = generate(size, gen);

#ifdef SHOW_ARRAYS
  cout << endl << "    \u21aa given: ";
  print_arr(arr, size);
  cout << endl;
#endif

  const auto startTime = steady_clock::now();
  sort(arr, size);
  const auto endTime = steady_clock::now();
  const auto durationTime = duration_cast<microseconds>(endTime - startTime).count();

#ifdef SHOW_ARRAYS
  cout << "    \u21aa sorted: ";
  print_arr(arr, size);
  cout << "\ttook " << durationTime << "µs" << endl;
#else
  cout << (is_sorted(arr, size) ? "\u2713" : "\u2717") << "\ttook " << durationTime << "µs" << endl;
#endif

  delete[] arr;
}

void shell_sort(int* const arr, const unsigned n) {
  unsigned d = 1;
  while (d <= n / 9) d = 3 * d + 1;
  for (; d > 0; d /= 3) {
    for (unsigned i1 = d; i1 < n; i1++) {
      const int VAL = arr[i1];
      unsigned i2 = i1;
      while (i2 >= d && VAL < arr[i2 - d]) {
        arr[i2] = arr[i2 - d];
        i2 = i2 - d;
      }
      arr[i2] = VAL;
    }
  }
}

void quick_sort(int* const arr, const unsigned n) {
  _quick_sort(arr, 0, n - 1);
}

void _quick_sort(int* const arr, const int iL, const int iR) {
  const int MID = arr[(iL + iR) / 2];
  int l = iL, r = iR;
  while (l < r) {
    while (arr[l] < MID) l++;
    while (MID < arr[r]) r--;
    if (l <= r) 
      swap(arr[l++], arr[r--]);
  }
  if (iL < r)
    _quick_sort(arr, iL, r);
  if (iR > l)
    _quick_sort(arr, l, iR);
}

void swap(int &v1, int &v2) {
  const int TMP = v1;
  v1 = v2;
  v2 = TMP;
}

int* generate(const unsigned n, const Generation gen) {
  int* const arr = new int[n];
  for (unsigned i = 0; i < n; i++)
    switch (gen) {
      case ASCENDING:  arr[i] = i;          break;
      case DESCENDING: arr[i] = n - i - 1;  break;
      case RANDOM:     arr[i] = rand() % n; break;
      default: throw "Invalid generation specifier.";
    }
  return arr;
}

void print_arr(const int* const arr, const unsigned n) {
  for (unsigned i = 0; i < n; i++)
    cout << arr[i] << " ";
}

bool is_sorted(const int* const arr, const unsigned n) {
  for (unsigned i = 1; i < n; i++)
    if (arr[i] < arr[i - 1]) return false;
  return true;
}
