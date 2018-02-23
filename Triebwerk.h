/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triebwerk.h
 * Author: snbl
 *
 * Created on February 22, 2018, 7:35 PM
 */

#ifndef TRIEBWERK_H
#define TRIEBWERK_H
#include "Bauteil.h"
#include "Container.h"

#include <iostream>

using std::cout; using std::endl;

class Triebwerk : public Bauteil{
public:
    Triebwerk(const std::string& bezeichnung, double gewicht, double schub, double treibstoffverbrauch ) 
            : Bauteil(bezeichnung, gewicht), m_schub{schub}, m_treibstoffverbrauch{treibstoffverbrauch} {}
    Triebwerk(const Triebwerk& orig);
    virtual ~Triebwerk() {}
    double get_treibstoffverbrauch() const {return m_treibstoffverbrauch;}
    double get_schub() const {return m_schub;}
    virtual void print();
private:
    double m_schub;
    double m_treibstoffverbrauch;

};


void Triebwerk::print()
{
    cout << "Bezeichnung: " << get_bezeichnung() << "\n"
            << "Gewicht: " << get_gewicht() << "\n"
            << "Status: " << aktiv_to_string() << "\n"
            << "Schub: " << get_schub() 
            << "\nTreibstofffverbrauch: " << get_treibstoffverbrauch() << "\n\n";
}

#endif /* TRIEBWERK_H */

