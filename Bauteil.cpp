/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bauteil.cpp
 * Author: snbl
 * 
 * Created on February 22, 2018, 3:16 PM
 */

#include "Bauteil.h"
#include <iostream>

using std::cout;

std::string Bauteil::get_name() {
    return m_name;
}

double Bauteil::get_gewicht() {
    return m_gewicht;
}

std::string Bauteil::get_status() {
    if (m_aktiv) return "aktiv";
    else return "inaktiv";
}

void Bauteil::print() {
    cout << "Name: " << m_name << "\n"
            << "Gewicht: " << m_gewicht << " kg\n";
}

