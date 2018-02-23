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

using std::cout; using std::endl;

class Nutzlast : public Container{
public:
    Nutzlast(const std::string& bezeichnung, double gewicht) 
        : Container(bezeichnung, gewicht) {}
    Nutzlast(const Nutzlast& orig);
    virtual ~Nutzlast() {}
    virtual void print();    
private:

};

void Nutzlast::print()
{
    Container::print();
    cout << endl;
}



#endif /* NUTZLAST_H */

