//
// Created by Erfan Karimi on 10.07.22.
//

#include "DoublyLinkedList.h"
#include<iostream>
#include <stdlib.h>
using namespace std;

DoublyLinkedList::DoublyLinkedList() : m_head(nullptr), m_tail(nullptr) {}
DoublyLinkedList::DoublyLinkedList(const DoublyLinkedList &other) {
    for (auto otherCurr = other.m_head; otherCurr != nullptr; otherCurr = otherCurr ->m_next) {
        push_back(otherCurr->getElem());
    }
}
DoublyLinkedList::~DoublyLinkedList(){
      while (m_head != nullptr) pop_front();
}
DoublyLinkedList& DoublyLinkedList::operator=(DoublyLinkedList other) {
    std::swap(m_head, other.m_head);
    std::swap(m_head, other.m_head);
    return *this;
}

std::ostream& operator<<(std::ostream& os, const DoublyLinkedList& list) {
    char c= '[';
    for (auto curr = list.m_head; curr != nullptr; curr = curr->getNext()){
        os << c << " "<< curr -> getElem();
        c = ",";
    }
    os << "]";
    return os;
}
void DoublyLinkedList::push_back(unsigned val) {
    DoublyLinkedElem* new_tail = new DoublyLinkedElem(val, m_tail, nullptr);
    if (m_head == nullptr) m_head = new_tail;
    else m_tail->m_next = new_tail;
    m_tail= new_tail;
}

void DoublyLinkedList::push_front (unsigned val) {
    DoublyLinkedElem *new_head = new DoublyLinkedElem(val, nullptr, m_head);
    if (m_tail == nullptr) m_tail = new_head;
    else m_head->m_prev = new_head;
    m_head = new_head;
}

unsigned& DoublyLinkedList::front() {
    if (m_head == nullptr) throw std::out_of_range("List is empty");
    return m_head->getElem();
}

unsigned& DoublyLinkedList::back() {
    if (m_tail == nullptr) throw std::out_of_range("List is empty");
    return m_tail -> getElem();
}
const unsigned& DoublyLinkedList::front() const {
    if (m_head == nullptr) throw std::out_of_range ("List is empty");
    return m_head->getElem();
}
const unsigned& DoublyLinkedList::back() const {
    if (m_tail == nullptr) throw std::out_of_range("List is empty");
    return m_tail -> getElem();
}

void DoublyLinkedList::pop_front() {
    if (m_head == nullptr) throw std::out_of_range("No element to pop");
    DoublyLinkedElem* old_head = m_head;
    m_head = m_head->m_next;
    delete old_head;
    if (m_head != nullptr) m_head->m_prev = nullptr;
    else m_tail = nullptr;
}
void DoublyLinkedList::pop_back() {
    if (m_tail == nullptr) throw std::out_of_range ("No element to pop");
    DoublyLinkedElem* old_tail= m_tail;
    m_tail = m_tail->m_prev;
    delete old_tail;
    if (m_tail != nullptr) m_tail-›m_next = nullptr;
    else m_head = nullptr;
}
