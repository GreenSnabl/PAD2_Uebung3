#include "Rakete.h"
#include <iostream>
#include <typeinfo>
#include "Nutzlast.h"
#include "Tank.h"
#include "Triebwerk.h"


using std::cout; using std::endl;

Rakete::~Rakete() {
        if (m_bauteile.size() != 0){
            for (int i = 0; i < m_bauteile.size(); ++i)
                delete m_bauteile[i];
        }
    }


void Rakete::hinzufuegen(Bauteil* bauteil)
{
    m_bauteile.push_back(bauteil->clone());
}

void Rakete::loeschen(int index)
{
    if (index-1 >= m_bauteile.size() || index-1 < 0) return;
    delete m_bauteile[index-1];
    m_bauteile[index-1] = m_bauteile[m_bauteile.size() - 1];
    m_bauteile.pop_back();
}

void Rakete::print() const
{
    cout << "Rakete " <<  get_name() << "\n\n"
         << "Gesamtschub: "<< get_gesamtschub() << " kN\n"
         << "Gesamtverbrauch: " << get_gesamtverbrauch() << " kg/s\n"
         << "Gesamtgewicht: " << get_gesamtgewicht() << " kg\n"
         << "Thrust to Weight Ratio: " << calculate_twr() << "\n"
         << "Gesamtes Treibstoffgewicht: " << get_treibstoff() << " kg\n"
         << "Brenndauer: " << get_brenndauer() << " s\n" <<  endl;
    
    for(int i = 0; i < m_bauteile.size(); ++i){
        cout << i + 1 << ".\n";
        m_bauteile[i]->print();
    }
}