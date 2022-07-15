//
// Created by Erfan Karimi on 10.07.22.
//
#include<iostream>
#include <stdlib.h>
using namespace std;
#include <iostream>
#include <stdexcept>
#include "QueueOrStack.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#define NUM TESTS 10
#define ARR SIZE 10
using namespace std;
void testRational();
void testComplex();
void testRationalBubblesort();
void testQueueOrStack(bool);
int main() {
    srand(time(0));
    /* cout «< "Rational:"
    << endl: */
    /* testRational();*/
    //cout << endl << "Complex:" << endl;
    //testComplex();
    /* cout << endl << "Rational bubblesort:"*/
    /* testRationalBubblesort(); */
    cout << endl << "Queue:" << endl;
    testQueueOrStack(true);
    cout << endl << "Stack:" << endl;
    testQueueOrStack(false);
    return 0;
}
/*
void testRational(){
    for (int i= 0; i < NUM_TESTS; i++) {
        int num1 = rand() % 100 - 50;
        int den1 = rand() % 10 - 50;
        if (den1 == 0) den1 = 1;
        int num2 = rand() % 100 - 50;
        int den2 = rand() % 100 - 50;
        if (den2 == 0) den2 = 1;

        Rational r1(num1, den1);
        Rational r2(num2, den2);
        cout << num1 << " / " << den1 << "=" << r1 << endl;
        cout << num1 << " / " << den1 << "=" << r2 << endl;

        cout << num1 << " + " << den1 << "=" << r1 + r2 << endl;
        cout << num1 << " - " << den1 << "=" << r1 - r2 << endl;
        cout << num1 << " * " << den1 << "=" << r1 * r2 << endl;

        try {
            cout << r1 << "/ " << r2 / r2 << endl;
        }
        catch (invalid_argument &e) {
            cout << "(" << num1 << "/" << den1 << ") / (" << num2 << "/" << den2 << "): " << e.what() << endl;
        }

        cout << r1 << " == " << r2 << " = " << (r1 == r2) << endl;
        cout << r1 << " == " << r2 << " = " << (r1 != r2) << endl;
        cout << r1 << " == " << r2 << " = " << (r1 < r2) << endl;
        cout << r1 << " == " << r2 << " = " << (r1 > r2) << endl;
        cout << r1 << " == " << r2 << " = " << (r1 <= r2) << endl;
        cout << r1 << " == " << r2 << " = " << (r1 >= r2) << endl;
        cout << endl;

    }
*/
void testQueueOrStack (bool isQueue) {
    Queue0rStack qos(isQueue);
    cout << "push:" << endl;
    for (int i = 0; i < ARR_SIZE; i++) {
        qos.push(rand() % 100);
        cout << qos << endl;
    }
    cout << "peek:" << endl << gos.peek() << end;
    testConstQueueOrStack(qos);
    qos.peek() = 1234;
    cout << "peek modification:" << endl << qos << endl;
    qos.pop();
    cout << "pOp: " << endl << qos << endl;
    Queue0rStack qos2(qos);
    qos.pop();
    cout << "Copy contructor:" << endl;
    cout << qos << endl;
    cout << qos2 << endl;
    qos2 = qos;
    qos.pop();
    cout << "Assignment operator:" << endl;
    cout << qos << endl;
    cout << qos2 << endl << endl;
}



