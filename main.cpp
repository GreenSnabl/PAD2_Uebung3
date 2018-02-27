/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: snbl
 *
 * Created on February 26, 2018, 8:17 PM
 */


#include <iostream>
#include <vector>

#include "Bauteil.h"
#include "Nutzlast.h"
#include "Triebwerk.h"
#include "Tank.h"
#include "Rakete.h"
#include "Sensor.h"
#include "Managerklasse.h"

using namespace std;

void print(Bauteil* b)
{
    b->print();
}


int main(int argc, char** argv) {

    Managerklasse m;
    
    m.createRocket("Große Rakete");
    m.selectRocket();
    
    /*
    Rakete r("Rakete");
    Tank ta1("Minitank", 20, 50, 50);
    Tank ta2("Megatank", 20, 500, 100);
    Triebwerk tr1("Triebwerk", 20, 20, 20);
    Triebwerk tr2("Triebwerk2", 50, 500, 5000);
    Nutzlast nu1("Nutzlastwurst", 100, 100, 100);
    Sensor se1("Sensor", 500);
    
    r.hinzufuegen(&ta1);
    r.hinzufuegen(&ta2);
    r.hinzufuegen(&tr1);
    r.hinzufuegen(&tr2);
    r.hinzufuegen(&tr2);
    r.hinzufuegen(&nu1);
    r.hinzufuegen(&se1);
    
    r.print();
    
    r.loeschen(5);
    r.print();
    
    */
    /*
    Nutzlast* np = nu.clone();
    np->verbrauchen(10);
    nu.print();
    np->print();
    */
    return 0;
    
}

