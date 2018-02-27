/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UE3Skizze.h
 * Author: den
 *
 * Created on February 26, 2018, 2:17 PM
 */

#ifndef UE3SKIZZE_H
#define UE3SKIZZE_H
#include <string>

class Bauteil {
public:

    virtual ~Bauteil() {
    }
    virtual std::string get_name();
    virtual double get_gewicht();
    virtual void print() = 0;
    virtual std::string get_status();
protected:

    Bauteil(std::string name, double gewicht) : m_name{name}, m_gewicht{gewicht}, m_aktiv{false}
    {
    }

    std::string m_name;
    double m_gewicht;
    bool m_aktiv;
};

class Container : public Bauteil {
protected:
    Container(std::string name, double gewicht, double fuellVolumen, double fuellstand) : Bauteil(name, gewicht), m_fuellVolumen{fuellVolumen}, m_fuellstand{fuellstand}
    {
    }
    double m_fuellVolumen;
    double m_fuellstand;
};

class Tank : public Container {
public:

    Tank(std::string name, double gewicht, double fuellVolumen, double fuellstand)
    : Container(name, gewicht, fuellVolumen, fuellstand) {
    }
    double get_gesamtgewicht();

    void print();
};

class Nutzlast : public Container {
public:

    Nutzlast(std::string name, double gewicht) : Container(name, gewicht, 0, 0) {
    }
    void print();
};

class Triebwerk : public Bauteil {
public:
    Triebwerk(std::string name, double gewicht, double schub, double verbrauch) : Bauteil(name, gewicht), m_schub{schub}, m_verbrauch{verbrauch}
    {
    }

    void print();


private:
    double m_schub;
    double m_verbrauch;
};


#endif /* UE3SKIZZE_H */

