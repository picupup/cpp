//
// Created by Erfan Karimi on 11.07.22.
//

#include "case_reference.h"
using namespace std;


case_reference::case_reference(case_reference& other, string& var) : obj_other(&other), obj_var(var){}
case_reference::case_reference(string& var): obj_var(var) {}
void case_reference::set_var(string& var) { obj_var = var;  }
string case_reference::get_var() {return obj_var;}
void case_reference::set_ob_other(case_reference &other) { obj_other = &other;}
void case_reference::refe_point(int*& lil) {cout << "refe_point variable = " << lil << endl;
    lil[2] = 4;
    cout << "refe_point = " << lil[2] << endl;
}
void case_reference::pointer_arr(int* lil) {
    //cout << "Bin in pointer variable = " << &lil << endl;
    lil[2] = 3;
    cout << "pointer_arr variable = " << lil[2] << endl;
    //cout << "pointer_arr variable = " << lil[2] << endl;
}
