/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bauteil.h
 * Author: snbl
 *
 * Created on February 22, 2018, 3:16 PM
 */

#ifndef BAUTEIL_H
#define BAUTEIL_H
#include <string>

class Bauteil {
public:

    virtual ~Bauteil() {
    }
    virtual std::string get_name();
    virtual double get_gewicht();
    virtual void print() = 0;
    virtual std::string get_status();
    virtual void aktivieren() {;}

    virtual Bauteil* clone() const = 0;
    
    
protected:

    Bauteil(std::string name, double gewicht) : m_name{name}, m_gewicht{gewicht}, m_aktiv{false}
    {
    }
  
    std::string m_name;
    double m_gewicht;
    bool m_aktiv;
};




#endif /* BAUTEIL_H */

