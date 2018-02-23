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

class Container : public Bauteil{
public:
    Container(const std::string& bezeichnung, double gewicht) : 
        Bauteil(bezeichnung, gewicht) {}
    virtual ~Container() {}
    virtual void print() = 0;
private:


};

void Container::print()
{
    cout << "Bezeichnung: "  << get_bezeichnung() << "\n"
            << "Gewicht: " << get_gewicht() << "\n"
            << "Status: " << aktiv_to_string() << endl;
}


#endif /* CONTAINER_H */

