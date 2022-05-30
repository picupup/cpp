//Erzeuge eine Raute, abhängig von der Hoehe n
#include <iostream>

int hight {20}; 

void ausgabe(int stars, int width){
    for (int j=0; j< (width-stars)/2; ++j)
        std::cout << " " ;

    for (int j=0; j<stars; ++j)
        std::cout << "*" ;

    std::cout << std::endl; 
}

void odd(int hight){
    bool o=false; 
    int stars=1;
    while (stars>0) {

        //oben
        if (stars < hight && o==false){
            ausgabe(stars, hight);      //hight==width
            stars=stars+2;

        //mitte
        } else if (stars == hight){
            ausgabe(stars, hight);
            stars=stars-2; 
            o=true;
       
        //unten
        } else {
            ausgabe(stars, hight);
            stars=stars-2;
        }
    }
}

void even(int hight){
    bool o=false; 
    int stars=1;
    while (stars>0) {

        //oben
        if (stars < hight-1 && o==false){
            ausgabe(stars, hight-1);    //width==hight-1
            stars=stars+2;

        //mitte
        } else if (stars == hight-1){
            ausgabe(stars, hight-1);
            ausgabe(stars, hight-1);
            stars=stars-2; 
            o=true;
       
        //unten
        } else {
            ausgabe(stars, hight-1);
            stars=stars-2;
        }
    }
}

int main() {
    if (hight%2==0)
        even(hight);
    else 
        odd(hight);
    return 0;
}
