/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Container.h
 * Author: snbl
 *
 * Created on February 22, 2018, 7:01 PM
 */

#ifndef CONTAINER_H
#define CONTAINER_H

#include "Bauteil.h"
class Container : public Bauteil {
public:
        virtual void print() = 0;
        virtual ~Container() {}
        virtual double get_gewicht() {return m_gewicht + m_fuellVolumen * m_fuellstand / 100;}
      //  virtual Container* clone() const = 0;
protected:
    Container(std::string name, double gewicht, double fuellVolumen, double fuellstand) : Bauteil(name, gewicht), m_fuellVolumen{fuellVolumen}, m_fuellstand{fuellstand}
    {
    }
    double m_fuellVolumen;
    double m_fuellstand;
};

#endif /* CONTAINER_H */

