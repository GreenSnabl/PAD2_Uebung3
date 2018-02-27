/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triebwerk.h
 * Author: snbl
 *
 * Created on February 22, 2018, 7:35 PM
 */

#ifndef TRIEBWERK_H
#define TRIEBWERK_H

#include "Bauteil.h"

class Triebwerk : public Bauteil {
public:
    Triebwerk(std::string name, double gewicht, double schub, double verbrauch) : Bauteil(name, gewicht), m_schub{schub}, m_verbrauch{verbrauch}
    {
    }
    virtual ~Triebwerk() {}
    void print();
    void aktivieren();
    virtual double get_schub() const {return m_schub;}
    virtual double get_verbrauch() const {return m_verbrauch;}

    virtual Triebwerk* clone() const;

private:
    double m_schub;
    double m_verbrauch;
};

#endif /* TRIEBWERK_H */

