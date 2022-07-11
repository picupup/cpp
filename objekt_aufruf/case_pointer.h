//
// Created by Erfan Karimi on 11.07.22.
//

#ifndef OBJEKT_AUFRUF_CASE_POINTER_H
#define OBJEKT_AUFRUF_CASE_POINTER_H
#include "string"
#include<iostream>
#include <stdlib.h>
using namespace std;
class case_pointer{
    public:
    case_pointer* obj_other;
    case_pointer(case_pointer &other, string& var);
    case_pointer(string& var);
    string get_var();
    void set_var(string& var);
    void set_ob_other(case_pointer& other);
    private:
    string& obj_var;


};
#endif //OBJEKT_AUFRUF_CASE_POINTER_H

