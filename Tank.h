/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tank.h
 * Author: snbl
 *
 * Created on February 22, 2018, 7:33 PM
 */

#ifndef TANK_H
#define TANK_H
#include "Container.h"
#include <iostream>

using std::cout; using std::endl;

class Tank : public Container{
public:
    Tank(const std::string& bezeichnung, double gewicht, double fuellVolumen, double fuellstand) 
    : Container(bezeichnung, gewicht) , m_fuellVolumen{fuellVolumen}, m_fuellstand{fuellstand}  {}
    Tank(const Tank& orig);
    virtual ~Tank() {}
    virtual void print();
    double get_fuellvolumen() const { return m_fuellVolumen;}
    double get_fuellstand() const {return m_fuellstand;}
private:
    double m_fuellVolumen;
    double m_fuellstand;
    
};


void Tank::print()
{
  Container::print();
  cout << "Fuellstand: " << get_fuellstand() << "\n" 
       << "Fuellvolumen: " << get_fuellvolumen() << "\n" << endl;
}

#endif /* TANK_H */

