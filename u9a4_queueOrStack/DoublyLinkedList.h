//
// Created by Erfan Karimi on 10.07.22.
//

#ifndef CPP_DOUBLYLINKEDLIST_H
#define CPP_DOUBLYLINKEDLIST_H
#include<iostream>
#include <stdlib.h>
using namespace std;
#include <ostream>
#include "DoublyLinkedElem.h"
class DoublyLinkedList {
public:
    DoublyLinkedList();
    DoublyLinkedList(const DoublyLinkedList&);
    ~DoublyLinkedList();

    DoublyLinkedList& operator=(DoublyLinkedList&);
    friend std::ostream& operator<<(std::ostream&, const DoublyLinkedList&);

    void push_back(unsigned);

    void push_front(unsigned);

    unsigned& front();

    unsigned& back();

    const unsigned& front() const;

    const unsigned& back() const;

    void pop_front();

    void pop_back();

private:
    DoublyLinkedElem* m_head = nullptr;
    DoublyLinkedElem* m_tail = nullptr;
};


#endif //CPP_DOUBLYLINKEDLIST_H
