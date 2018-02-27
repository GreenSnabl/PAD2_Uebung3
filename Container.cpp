/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Container.cpp
 * Author: snbl
 * 
 * Created on February 22, 2018, 7:01 PM
 */

#include "Container.h"
#include <iostream>

using std::cout;

void Container::print() {
    Bauteil::print();
    cout << "Maximales Fuellvolumen: " << Container::m_fuellVolumen << " kg\n"
            << "Fuellstand: " << Container::m_fuellstand << " %\n\n";
}