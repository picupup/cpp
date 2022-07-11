//
// Created by Erfan Karimi on 10.07.22.
//

#include "case_normal.h"


#include<iostream>
#include <stdlib.h>
#include "string"
using namespace std;


case_normal::case_normal(string variable) : variable(variable){}

case_normal::case_normal() {}
void case_normal::set_var(string some){ variable = some;}
string case_normal::get_var() {return variable;}
