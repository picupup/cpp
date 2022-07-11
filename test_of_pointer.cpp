//
// Created by Erfan Karimi on 10.07.22.
//



#include<iostream>
#include <stdlib.h>
using namespace std;
/*
Pointers: *ptr, point to the memory location of a variable
int a = 10
int *ptr = &a //points to the location in memory (0x80ea or whatever)
instead of the value

in order for pointers to work, the variable it's pointing to needs to
be de-referenced using &.(If confused, remember that the variable, int a,
is itself a reference to the location of the value you set it to).

A reference variable: &ref, points to another variable.

int b = 20;
int &ref = b // points to the value of b, which is 20.

run this if confused:
*/
int main(){
    int a = 10;
    int *ptr = &a;
    cout <<   "int a value: " << a << endl;
    std::cout << "int ptr value: " << ptr << std::endl;

    int b = 20;
    int& ref = b;
    std::cout << "int b value: " << b << std::endl;
    std::cout << "int ref value: " << ref << std::endl;

    ref = a;
    std::cout << "int ref after setting it equal to a: " << ref << std::endl;
    ref = *ptr;
    std::cout << "int ref after setting it equal to *ptr: " << ref << std::endl;
    ptr = &ref;
    std::cout << "ptr after setting it equal to &ref: " << ptr << std::endl;
    ptr = &b;
    std::cout << "ptr after setting it equal to &b: " << ptr << std::endl;
    int t0 = 0;
    int* t1 = &t0;
    *t1 = 10;

    int c = t0;

    std::cout  <<" &t0 =" << &t0 << std::endl;
    std::cout << "*t1=  " << *t1 <<" t1 =" << t1 <<" &t1 =" << &t1 <<std::endl;
    std::cout <<" c =" << c <<" &c =" << &c <<std::endl;

    return 0;
}



/*
Reference variables CANNOT be set to a pointer variable; In the case above, you
see we can't just put ref = ptr; ptr HAS to be dereferenced with a *, which in
turn will give us the value of a, or 10. (dereference pointers with *)

Same goes for pointer variables being set to a reference; you have to dereference
the reference value (ptr = &b instead of ptr = b;). In the block above, when we
set ptr = &ref, the ref variable is dereferenced showing us a memory location.
When ptr=&b is called and we see the output, we noticed it is the same as the previous
output.
*/
