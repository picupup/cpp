//welche Zahl, i1 oder i2, hat mehr Einsen in ihrer Binärdarstellung
#include <iostream>

int countOnes(int i){
    int c=0;
    while (i != 0){
        if (i%2 == 1) 
            ++c;
        i=(unsigned)i>>1;
    }
    return c;
}

void check(int i1, int i2){
    int c1=countOnes(i1);
    int c2=countOnes(i2);
    
    std::cout << "i1=" << i1 << " ,  i2=" << i2 << std::endl;
    std::cout << "c1=" << c1 << " ,  c2=" << c2 << std::endl;

    if (c1>c2){
        std::cout << i1 << std::endl;
    } else if (c1 < c2) {
        std::cout << i2 << std::endl;
    } else {
        std::cout << i1 << " hat gleich viele Einsen wie " << i2 << " in ihrer Binärdarstellung" << std::endl;
    }

}

int main(){
    check(-8, 9);
    return 0;
}
