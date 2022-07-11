//
// Created by Erfan Karimi on 10.07.22.
//

#ifndef OBJEKT_AUFRUF_CASE_NORMAL_H
#define OBJEKT_AUFRUF_CASE_NORMAL_H
#include<iostream>
#include <stdlib.h>
//#include "string"

using namespace std;

class case_normal{
public:

    case_normal (string);
    case_normal();

    string get_var();
    void set_var(string some);


private:
    string variable;
};

#endif //OBJEKT_AUFRUF_CASE_NORMAL_H
