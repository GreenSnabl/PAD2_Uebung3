/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sensor.cpp
 * Author: snbl
 * 
 * Created on February 27, 2018, 5:58 PM
 */

#include "Sensor.h"
#include <iostream>
using std::cout;

void Sensor::print()
{
        cout << "Sensor\n";
    Bauteil::print();
    cout << "\n";
}

Sensor* Sensor::clone() const
{
    return new Sensor(*this);
}

