/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "UE3Skizze.h"
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
            << "Gewicht: " << m_gewicht << "\n"
            << "Status: " << get_status() << "\n";
}

void Tank::print() {
    Bauteil::print();
    cout << "Maximales Fuellvolumen: " << Container::m_fuellVolumen << " kg\n"
            << "Fuellstand: " << Container::m_fuellstand << " %\n\n";
}

void Nutzlast::print() {
    Bauteil::print();
    cout << "\n";

}

void Triebwerk::print() {
    Bauteil::print();
    cout << "Schub: " << m_schub << " kN\n"
            << "Verbrauch: " << m_verbrauch << " kg/s\n\n";
}
