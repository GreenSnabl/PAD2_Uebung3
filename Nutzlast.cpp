/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nutzlast.cpp
 * Author: snbl
 * 
 * Created on February 22, 2018, 7:33 PM
 */

#include "Nutzlast.h"
#include <iostream>

using std::cout;

void Nutzlast::print() {
        cout << "Nutzlast\n";
    Container::print();
}

Nutzlast* Nutzlast::clone() const{
    return new Nutzlast(*this);
}