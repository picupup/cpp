//<<u8a1.h>>
//erfankarimi
//2022-06-20_17:11:45
//Thema:
//


#include<iostream>
#include <stdlib.h>
using namespace std;

class A{
	int int_wert;
	
	public:
	
	void set_wert(int wert){
		int_wert = wert;
	}
	int get_wert(){
		return int_wert;
	}

	~A(){
		//cout << "Destruktor von der Zahl " << int_wert << endl;
	}

};

int main()

{
	const int length=10;
	A array[length]; 


	// int i = 2;
	// int p = 3;

	for (int i = 0; i<length; ++i){
		array[i].set_wert(rand() % 100);
	}

	for (int i = 0; i<length; ++i){
		cout << "index = > " << i <<  " int Wert = > " << array[i].get_wert() << endl;
	}
 return 0;

}
