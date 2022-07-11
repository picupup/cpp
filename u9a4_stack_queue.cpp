//<<u9a4_stack_queue.cpp>>
//erfankarimi
//2022-06-30_08:38:24
/*
Thema:
Aufgabe 4:
Implementieren Sie eine Klasse, die gleichzeitig einen Stack und eine Queue für unsigned int realisiert. 
Diese Klasse soll von der Klasse der doppelt verketteten Liste abgeleitet sein. 
Welche der beiden Funktionalitäten im tatsächlichen Objekt realisiert werden,
 soll durch ein boolesches Flag im Konstruktor entschieden werden.
 http://codepad.org/2It3PLSN
*/


#include<iostream>
#include <stdlib.h>
using namespace std;
// template stack<class T> 
// template std::queue<class T>


// template<class obejekt> 
// obejekt whatis (bool type){
//         return (type ? stack : queue);
    
// }




class StackOrQueue : public DoubleList {
    public:
    int length;
    listElem* field;
   
    StackOrQueue(bool variant, int length):m_variant(variant),length(length){
        /*
        variant= true = stack
                false = queue
        */
        field = (new listElem*) [length];
        
        
        //<whatis(obejekt) (variant)> process;
    }

    bool isEmpty(){
        
    }

    unsigned top(){
        if (m_variant){

        }

    }

    void push(unsigned elm){

    }
    void pop(){

    }
    private:
    const bool m_variant;
};


class DoubleList {
    public:
    class listElem{
        public:
        listElem(unsigned obj, listElem* next, listElem* prev ){
            m_Next = next;
            m_Prev = prev;
            m_Elem = obj;
        }

        listElem(unsigned obj){
            m_Elem = obj;
        }

        unsigned getElement(){ return m_Elem;}
        listElem* getNext(){return m_Next;}
        listElem* getPrev(){return m_Next;}
        void setNext(listElem* next){m_Next = next;}
        void setPrev(listElem* prev){m_Prev = prev;}

        private:
        listElem* m_Next;
        listElem* m_Prev;
        unsigned m_Elem;
    };
   
};












int main()
{


 /* code */ 
 return 0;
}


