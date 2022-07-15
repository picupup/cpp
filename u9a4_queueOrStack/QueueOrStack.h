//
// Created by Erfan Karimi on 10.07.22.
//

#ifndef CPP_QUEUEORSTACK_H
#define CPP_QUEUEORSTACK_H
#include "DoublyLinkedElem.h"
#include<iostream>
#include <stdlib.h>
using namespace std;

class QueueOrStack : private Doublylinkedlist {
public:
    QueueOrStack(bool);
    QueueOrStack(const QueueOrStack&);

    QueueOrStack& operator=(const QueueOrStack&);
    friend std::ostream& operator<<(std::ostream&, const QueueOrStack&);

    void push (unsigned);
    unsigned peek() const;
    unsigned& peek();
    void pop();
private:
    bool isQueue;
};



#endif //CPP_QUEUEORSTACK_H
