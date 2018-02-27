/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tank.cpp
 * Author: snbl
 * 
 * Created on February 22, 2018, 7:33 PM
 */

#include "Tank.h"
#include <iostream>

using std::cout;

void Tank::print() {
    cout << "Tank\n";
    Container::print();
}

Tank* Tank::clone() const {
    return new Tank(*this);
}