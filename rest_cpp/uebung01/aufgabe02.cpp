//Alle Primzahlen von 0 bis n
#include <iostream>

int n={10}; 

bool getPrime(int i){
    if (i%2==1 || i==2){
        for (int j=3; j<= i/3; j+=2){
            if (i%j==0)
                return false;
        } 
        return true;
    } else 
        return false; 
    }
}
int main(){
    for (int i=0; i<=n; ++i){
        if (getPrime(i))
            std::cout << i << std::endl;
    }
    return 0; 
}
