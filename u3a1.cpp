#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    /* code */
    int zahl = 0;
    int c=0;
    cout  << zahl << endl << "Bitte eine Zahl eingeben: ";
    while (cin >> c){
        if (zahl == 0){
            zahl += c;
        }
        else{
            zahl = (zahl * 10) + c;
        }
        cout  << zahl << endl << "Bitte eine Zahl eingeben: ";
        //cin >> c;

    }

    cout  << zahl;
    return 0;
}


