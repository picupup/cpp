#include <iostream>

const int len1 = 3;
const int len2 = 5; 

void moveStone(int towers[][len2], int iFrom, int iTo){
   for (int i=0; i<len2; ++i){
       if (towers[iFrom][i]!=0){
           for (int j = len2-1; j>=0; --j){
               if (towers[iTo][j]==0){
                   towers[iTo][j]=towers[iFrom][i];
                   towers[iFrom][i]=0;
                   return; 
               }
           }
       }
   }
}

void printStone(int iWidth){
    if (iWidth==0){
        for (int i=0; i<21; ++i)
            std::cout << " " ;
    } else { 
        for (int i=0; i<(21-iWidth)/2; ++i)
            std::cout << " " ;
        for (int i=0; i<iWidth; ++i)
            std::cout << "+" ;
        for (int i=0; i<(21-iWidth)/2; ++i)
            std::cout << " " ;
    }
}

void print(int towers[len1][len2]){
    for (int j=0; j<len2; ++j){
        for (int i=0; i<len1; ++i){
            printStone(towers[i][j]);
        }
        std::cout << std::endl;
    }
    std::cout << "-------------------------------------------------------------------------" << std::endl;
    std::cout << std::endl;
}

void move(int towers[len1][len2], int N, int iFrom, int iTo, int iVia){
    if (N>0){
        move(towers, N-1, iFrom, iVia, iTo);
        moveStone(towers, iFrom, iTo);
        print(towers);
        move(towers, N-1, iVia, iTo, iFrom);
    }
}

void init(int towers[len1][len2]){
    for (int i=0 ; i<len2 ; ++i){
        towers[0][i]=2*i+1;
        towers[1][i]=0;
        towers[2][i]=0;
    }
}

int main(){
    int towers[len1][len2];
    init(towers);
    print(towers);
    move(towers, len2, 0, 2, 1);
    return 0;
}
