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
#include <string>
#include <vector>

class Rakete {
public:

    Rakete(std::string name) : m_name{name} {}
    virtual ~Rakete() {}
    
    void hinzufuegen(Bauteil* bauteil);
    const std::string get_name() const {return m_name;}
    void print() const;
    
private:
    std::string m_name;
    std::vector<Bauteil*> m_bauteile;
};

#endif /* RAKETE_H */

void Rakete::hinzufuegen(Bauteil* bauteil)
{
    m_bauteile.push_back(bauteil);
}

void Rakete::print() const
{
    cout << "Bestandteile von Rakete " <<  get_name() << ":\n\n";
    for(int i = 0; i < m_bauteile.size(); ++i)
        m_bauteile[i]->print();
}