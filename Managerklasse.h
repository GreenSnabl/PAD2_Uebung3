/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Managerklasse.h
 * Author: snbl
 *
 * Created on February 27, 2018, 5:57 PM
 */

#ifndef MANAGERKLASSE_H
#define MANAGERKLASSE_H
#include <vector>
#include "Rakete.h"
#include "Bauteil.h"
#include "Container.h"
#include "Nutzlast.h"
#include "Tank.h"
#include "Triebwerk.h"
#include "Sensor.h"
#include <string>

class Managerklasse {
public:
    Managerklasse();
    ~Managerklasse() {}
    
    void showRockets();
    void showTriebwerke();
    void showTanks();
    void showNutz();
    void showSensor();
    void createRocket(const std::string& name);
    void selectRocket();
    void deleteRocket(int index);
    void editRocket(const int index);
    
    void showBauteile(int index);
    void addBauteil(int , int , int);
    
    void addSensor(int, int);
    void addTriebwerk(int, int);
    void addTank(int, int);
    void addNutz(int, int);
    
    
private:
    std::vector<Rakete> raketen;
    std::vector<Triebwerk> triebwerke;
    std::vector<Tank> tanks;
    std::vector<Nutzlast> nutzlasten;
    std::vector<Sensor> sensoren;
};

#endif /* MANAGERKLASSE_H */

