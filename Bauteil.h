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
#include <iostream>

using std::cout; using std::endl;

class Bauteil {
public:
    Bauteil();
    Bauteil(const std::string& bezeichnung, double gewicht, bool aktiv = false) 
            : m_bezeichnung{bezeichnung}, m_gewicht{gewicht}, m_aktiv{aktiv} {} 
    virtual ~Bauteil() {}
    void aktivieren();
    virtual void print() = 0;

    virtual std::string get_bezeichnung() const {return m_bezeichnung;}
    virtual double get_gewicht() const {return m_gewicht;}
    virtual bool get_aktiv() const {return m_aktiv;}
    virtual const std::string aktiv_to_string() {if(m_aktiv) return "aktiv"; else return "inaktiv";}
    
private:
    std::string m_bezeichnung;
    bool m_aktiv;
    double m_gewicht;
};




#endif /* BAUTEIL_H */

