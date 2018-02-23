/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sensor.h
 * Author: snbl
 *
 * Created on February 22, 2018, 7:35 PM
 */

#ifndef SENSOR_H
#define SENSOR_H
#include "Bauteil.h"

class Sensor : public Bauteil{
public:
    Sensor();
    Sensor(const Sensor& orig);
    virtual ~Sensor();
    virtual void print();
private:

};

#endif /* SENSOR_H */

