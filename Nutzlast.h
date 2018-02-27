/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nutzlast.h
 * Author: snbl
 *
 * Created on February 22, 2018, 7:33 PM
 */

#ifndef NUTZLAST_H
#define NUTZLAST_H
#include "Container.h"
#include <iostream>

class Nutzlast : public Container {
public:

    Nutzlast(std::string name, double gewicht, double fuellVolumen, double fuellstand)
    : Container(name, gewicht, fuellVolumen, fuellstand) {}
    virtual ~Nutzlast() {}
    
    void print();
    


    virtual Nutzlast* clone() const;
};



#endif /* NUTZLAST_H */

