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

class Tank : public Container {
public:

    Tank(std::string name, double gewicht, double fuellVolumen, double fuellstand)
    : Container(name, gewicht, fuellVolumen, fuellstand) {
    }

    virtual ~Tank() {
    }

    void print();
    
    virtual double get_treibstoff() const {
        return m_fuellVolumen * m_fuellstand / 100;
    }

    void verbrauchen(double verbrauch) {
        if (verbrauch > (m_fuellVolumen * m_fuellstand / 100)) return;
        m_fuellstand -= (verbrauch * 100 / m_fuellVolumen);
    }

    virtual Tank* clone() const;
};





#endif /* TANK_H */

