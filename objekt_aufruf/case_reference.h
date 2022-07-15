//
// Created by Erfan Karimi on 11.07.22.
//

#ifndef OBJEKT_AUFRUF_CASE_REFERENCE_H
#define OBJEKT_AUFRUF_CASE_REFERENCE_H
#include "string"
#include<iostream>
#include <stdlib.h>
using namespace std;
class case_reference{
    public:
    case_reference* obj_other;
    case_reference(case_reference &other, string& var);
    case_reference(string& var);
    string get_var();
    void refe_point(int*& lil);
    void set_var(string& var);
    void set_ob_other(case_reference& other);
    void pointer_arr(int* lil);
    private:
    string& obj_var;

    //~case_reference();



};
#endif //OBJEKT_AUFRUF_CASE_REFERENCE_H

