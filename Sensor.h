/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sensor.h
 * Author: snbl
 *
 * Created on February 27, 2018, 5:58 PM
 */

#ifndef SENSOR_H
#define SENSOR_H

#include "Bauteil.h"

class Sensor : public Bauteil {
public:
    Sensor(std::string name, double gewicht) : Bauteil(name, gewicht)
    {
    }
    virtual ~Sensor() {}
    void print();
    
    virtual Sensor* clone() const;
};

#endif /* SENSOR_H */

