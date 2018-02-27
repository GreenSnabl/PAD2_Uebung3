/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triebwerk.cpp
 * Author: snbl
 * 
 * Created on February 22, 2018, 7:35 PM
 */

#include "Triebwerk.h"
#include <iostream>

using std::cout;

void Triebwerk::print() {
    cout << "Triebwerk\n";
    Bauteil::print();
    cout <<  "Status: " << get_status() << "\n"
            << "Schub: " << m_schub << " kN\n"
            << "Verbrauch: " << m_verbrauch << " kg/s\n\n";
}

void Triebwerk::aktivieren() {
    m_aktiv = true;    
}

Triebwerk* Triebwerk::clone() const{
    return new Triebwerk(*this);
}