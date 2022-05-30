#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>

using namespace std;
using namespace chrono;
// Aufgabe 1:
// Implementieren Sie den Shell- und Quicksort für int-Arrays. Testen Sie Ihre Programme mit Arrays der Größen 10, 100, 1000 und 10000.
// Dabei sollen die Arrays bereits sortiert, invers sortiert und mit zufälligen Zahlen belegt sein.



void shell_sort(int field[], int size){
    int distanz = 4;
    for (;distanz > 0; distanz /= 3){
        for (int i1 = distanz; i1 < size; ++i1)
        {
            int iaktuell = field[i1];
            int i2 = i1;
            while (i2 >= distanz && iaktuell < field[i2 - distanz])
            {
                field[i2] = field[i2 - distanz];
                i2 = i2 - distanz;
            }
            field[i2] = iaktuell;
        }
    }
}

int main()
{
    
    int field[10] = {4, 2, 3, 4, 5, 1, 7, 8, 6, 10};
    // int size = 10;
    shell_sort(field, 10);
    
    for (int i = 0; i < 10;++i){
        cout << field[i] << endl;
    }

    cout << "size " << sizeof(field) << endl;
    return 0;
}
