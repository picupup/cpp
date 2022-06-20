//<<lsd.h>>
//erfankarimi
//2022-06-20_17:11:45
//Thema:
//


#include<iostream>
#include <stdlib.h>
using namespace std;

class A{
	public:
	int int_wert;

	A(int& in, int& h):se(h){
		int_wert = in;
	}

	void print(){
		cout << "hi" << &int_wert << "=>" << int_wert<<endl;
		cout << "hi" << &se << "=>" << se <<endl;
	
	}

	private:
	const int se;

};

int main()

{
	A array[] = new A[100]; 
	int i = 2;
	int p = 3;
	A* as = new A(i, p);
	//(*as).print();
	 

 return 0;

}
