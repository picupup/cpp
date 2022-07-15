//
// Created by Erfan Karimi on 10.07.22.
//
#include "DoublyLinkedElem.h"
#include<iostream>
#include <stdlib.h>
using namespace std;


class DoublyLinkedElem {
public:

    DoublyLinkedElem(DoublyLinkedElem obj, DoublyLinkedElem* next, DoublyLinkedElem* prev ): m_Elem((obj), m_Prev(prev), m_Next(next){
    }

    DoublyLinkedElem(DoublyLinkedElem obj) : m_Elem((obj)){
    }

    unsigned getElement(){ return m_Elem;}
    DoublyLinkedElem* getNext(){return m_Next;}
    DoublyLinkedElem* getPrev(){return m_Next;}
    void setNext(DoublelistElem* next){m_Next = next;}
    void setPrev(DoublelistElem* prev){m_Prev = prev;}

private:
    DoublyLinkedElem* m_Next;
    DoublyLinkedElem* m_Prev;
    DoublyLinkedElem m_Elem;
};


