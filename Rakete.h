/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rakete.h
 * Author: snbl
 *
 * Created on February 22, 2018, 3:16 PM
 */

#ifndef RAKETE_H
#define RAKETE_H

#include "Bauteil.h"
#include "Triebwerk.h"
#include "Tank.h"
#include "Nutzlast.h"


#include <string>
#include <vector>

class Rakete {
public:

    Rakete(std::string name) : m_name{name}
    {
    }
    virtual ~Rakete();

    void hinzufuegen(Bauteil* bauteil);
    void loeschen (int index);

    const std::string get_name() const {
        return m_name;
    }
    void print() const;

    double get_gesamtgewicht() const {
        double result = 0;
        for (int i = 0; i < m_bauteile.size(); ++i)
            result += m_bauteile[i]->get_gewicht();
        return result;
    }

    double get_gesamtschub() const {
        double result = 0;
        for (int i = 0; i < m_bauteile.size(); ++i) {
            Triebwerk* tp = dynamic_cast<Triebwerk*> (m_bauteile[i]);
            if (tp != nullptr) result += tp->get_schub();
        }
        return result;
    }

    double get_gesamtverbrauch() const {
        double result = 0;
        for (int i = 0; i < m_bauteile.size(); ++i) {
            Triebwerk* tp = dynamic_cast<Triebwerk*> (m_bauteile[i]);
            if (tp != nullptr) result += tp->get_verbrauch();
        }
        return result;
    }

    double get_treibstoff() const {
        double result = 0;
        for (int i = 0; i < m_bauteile.size(); ++i) {
            Tank* tp = dynamic_cast<Tank*> (m_bauteile[i]);
            if (tp != nullptr) result += tp->get_treibstoff();
        }
        return result;
    }

    double calculate_twr() const {
        return (get_gesamtschub() * 1000) / (get_gesamtgewicht() * 9.807);
    }

    double get_brenndauer() const {
        return get_treibstoff() / get_gesamtverbrauch();
    }

private:
    std::string m_name;
    std::vector<Bauteil*> m_bauteile;
};



#endif /* RAKETE_H */

