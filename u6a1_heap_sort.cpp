#include<iostream>
#include <stdlib.h>
#include <chrono>
using namespace std;
using namespace chrono;

typedef std::chrono::high_resolution_clock::time_point TimePoint;


// Aufgabe 1:
// Implementieren Sie den Heap- und Mergesort für int-Arrays. Testen Sie Ihre Programme mit Arrays der Größen 10, 100, 1000 und 10000.
// Dabei sollen die Arrays bereits sortiert, invers sortiert und mit zufälligen Zahlen belegt sein.


void swap(int field[], const int &v1, int &v2) {
    int tmp = field [v1];
    field[v1] = field[v2];
    field[v2] = field[tmp];
}

int compare (int a1, int a2){
    return a1 - a2;
}
void downheap (int keys [], int iEnd, int iIndex){
    
    int k = keys[iIndex];
    while (iIndex < iEnd / 2) {
        int iSon = 2 * iIndex + 1;
        if (iSon < iEnd-1 && compare(keys[iSon], keys[iSon + 1]) < 0){
            ++iSon;}
        if (!(compare(k,keys[iSon]) < 0)){
            break;}

        *&keys[iIndex] = keys[iSon]; 
        iIndex = iSon;
        }
    *&keys[iIndex] = k;
}

void heap_sort(int field[],int len) 
{
    for(int i = ((len-1)-1) / 2; i >= 0; --i){
        downheap(field, len,i);
        }
    for(int i = len - 1; i > 0; --i) {
        swap(field,0, i);
        downheap(field, i, 0); 
        
        }
}

void print (int field [], int len){
    cout << "[";
    for (int  index = 0; index < len ; ++index){
        if (index != 0)
            cout << ",";
        cout << field[index];
    }
    cout << "]";
}
int main()
{
    const int len = 11;
    int field [len] = {0,10,9,8,6,7,4,5,2,3,1};
   

    print(field, len);

    steady_clock::time_point start = high_resolution_clock::now();
    heap_sort(*&field, len);
    steady_clock::time_point finish = high_resolution_clock::now();
    duration<double> differenz = finish - start;
    cout << "    Gesamtlaufzeit: " << differenz.count() << " s\n";
    print(field, len);

    return 0;
}
