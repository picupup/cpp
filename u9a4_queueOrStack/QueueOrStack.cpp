//
// Created by Erfan Karimi on 10.07.22.
//
#include<iostream>
#include <stdlib.h>
using namespace std;
#include "QueueOrStack.h"
#include "DoublyLinkedElem.h"

QueueOrStack::QueueOrStack(bool isQueue) : DoublyLinkedList(), isQueue(isQueue) {}
QueueOrStack::QueueOrStack(const QueueOrStack& other) : DoublyLinkedList(other), isQueue(other.isQueue){}

QueueOrStack& QueueOrStack::operator=(const QueueOrStack& other) {
    if (this == &other) return *this;
    DoublyLinkedList::operator=(other);
    return *this;

}

std::ostream& operator <<(std::ostream& os, const QueueOrStack& q){
    os << (DoublyLinkedList) q;
    return os;
}



void QueueOrStack::push(unsigned value) {
    if (isQueue) {
        push_back(value);
    } else {
        push front(value);
    }
}

unsigned QueueOrStack::peek() const {
        return front():
}
unsigned& QueueOrStack::peek() {
    return front();
}

void QueueOrStack:: pop() {
    pop_front();
}
