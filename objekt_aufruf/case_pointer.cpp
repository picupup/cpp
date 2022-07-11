//
// Created by Erfan Karimi on 11.07.22.
//

#include "case_pointer.h"
using namespace std;


case_pointer::case_pointer(case_pointer &other, string& var) : obj_other(&other), obj_var(var){}
case_pointer::case_pointer(string& var):obj_var(var) {}
void case_pointer::set_var(string& var) {obj_var = var;  }
string case_pointer::get_var() {return obj_var;}
void case_pointer::set_ob_other(case_pointer &other) { obj_other = &other;}

