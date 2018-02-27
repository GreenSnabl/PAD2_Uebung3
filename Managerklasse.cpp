/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Managerklasse.cpp
 * Author: snbl
 * 
 * Created on February 27, 2018, 5:57 PM
 */
#include <fstream>
#include "Managerklasse.h"
#include <iostream>
#include <string>
#include <sstream>

using std::string; using std::cout; using std::endl; using std::cin;
using std::ifstream; using std::stringstream;

Managerklasse::Managerklasse() {
    
    string name;
    string temp1;
    string temp2;
    int gewicht;
    int verbrauch;
    int fuellstand;
    int fuellVolumen;
    int schub;
    ifstream ifs("Bauteile/Nutzlast.csv");
    string line;
    getline(ifs, line);
    line = "";

    
    for(line ;std::getline(ifs, line);)
    {       
       stringstream stream(line);
       getline(stream, name, ';');
       getline(stream, temp1, ';');
       stream >> fuellVolumen;
       stream.str("");
       stream.clear();
       stream << temp1;
       stream >> gewicht;
       nutzlasten.push_back(Nutzlast(name, gewicht, fuellVolumen, 100));
       stream.str("");
    }
    
    ifs.close();
    
    
    ifs.open("Bauteile/Triebwerke.csv");
    getline(ifs, line);
    line = "";

    
    for(line ;std::getline(ifs, line);)
    {       
       stringstream stream(line);
       getline(stream, name, ';');
       getline(stream, temp1, ';');
       getline(stream, temp2, ';');
       stream >> verbrauch;
       stream.str("");
       stream.clear();
       stream << temp1;
       stream >> gewicht;
       stream.str("");
       stream.clear();       
       stream << temp2;
       stream >> schub;
       triebwerke.push_back(Triebwerk(name, gewicht, schub, verbrauch ));
       stream.str("");
    }
    
    ifs.close();
    
    ifs.open("Bauteile/Tanks.csv");
    getline(ifs, line);
    line = "";

    
    for(line ;std::getline(ifs, line);)
    {       
       stringstream stream(line);
       getline(stream, name, ';');
       getline(stream, temp1, ';');
       stream >> fuellVolumen;
       stream.str("");
       stream.clear();
       stream << temp1;
       stream >> gewicht;
       tanks.push_back(Tank(name, gewicht, fuellVolumen, 100));
       stream.str("");
    }
    
    ifs.close();
    
    ifs.open("Bauteile/Sensoren.csv");
    getline(ifs, line);
    line = "";

    
    for(line ;std::getline(ifs, line);)
    {       
       stringstream stream(line);
       getline(stream, name, ';');
       stream >> gewicht;
       sensoren.push_back(Sensor(name, gewicht));
       stream.str("");
    }
    
    ifs.close();
}




void Managerklasse::showRockets()
{
    for (int i = 0; i < raketen.size(); ++i)
        cout << i+1 << ". " <<  raketen[i].get_name() << "\n";
}

void Managerklasse::showSensor()
{
    cout << "Sensoren:\n";
    for (int i = 0; i < sensoren.size(); ++i){
        cout << i + 1 << ".\n";
        sensoren[i].print();
    }
}

void Managerklasse::showTanks()
{
    cout << "Tanks:\n";
    for (int i = 0; i < tanks.size(); ++i){
        cout << i + 1 << ".\n";
        tanks[i].print();
    }
}

void Managerklasse::showTriebwerke()
{
    cout << "Triebwerke:\n";
    for (int i = 0; i < triebwerke.size(); ++i){
        cout << i+1 << "\n";
        triebwerke[i].print();
    }
}

void Managerklasse::showNutz()
{
    cout << "Nutzlastcontainer:\n";
    for (int i = 0; i < nutzlasten.size(); ++i) {
        cout << i+1 << "\n";
        nutzlasten[i].print();
    }  
}

void Managerklasse::createRocket(const string& name)
{
    bool exists = false;
    for (int i = 0; i < raketen.size(); ++i)
        if(raketen[i].get_name() == name)
        { 
            cout << "Rakete existiert schon.\nBitte wählen Sie einen anderen Namen." << endl; 
            return;
        }
    raketen.push_back(Rakete(name));
}

void Managerklasse::selectRocket()
{
    if(raketen.size() == 0) {
        cout << "Legen Sie erst eine Rakete an.\n";
        return;
    }
    int select = -1;
    cout << "Welche Rakete möchten Sie bearbeiten?\n";
    while(true){
    showRockets();
    cout << "\n>";
    cin >> select;
    if(select - 1 < 0 || select - 1 >= raketen.size()) {
        cout << "Falsche Eingabe. Bitte wählen Sie eine gültige Rakete.\n\n";
    }
    break;
    }
    editRocket(select - 1);
}

void Managerklasse::editRocket(const int rocketIndex){
    int mainInput = -1, select = -1, typ = -1;
    while(mainInput != 0) {
    cout << "Sie möchten folgende Rakete editieren:\n";
    raketen[rocketIndex].print();
    cout << "Was möchten Sie tun?\n"
         << "1. Bauteile anzeigen\n"
         << "2. Bauteil hinzufügen\n"
         << "3. Bauteil löschen\n"
         << "4. Bauteile aktivieren \n"
         << "5. Ausgabe der Raketendaten\n"
         << "6. Editieren beenden\n>";
    cin >> mainInput;
    switch (mainInput) {
        case 1: 
            showTriebwerke(); showTanks(); showNutz(); showSensor(); break;
        case 2:
            cout << "Welche Art von Bauteil möchten Sie hinzufügen?\n"
                 << "1. Sensor\n"
                 << "2. Triebwerk\n"
                 << "3. Tank \n"
                 << "4. Nutzlastcontainer\n>";
            cin >> select;
            showBauteile(select);
            cout << "Waehlen Sie ein Bauteil aus der Liste.\n >";
            cin >> typ;
            addBauteil(rocketIndex, select, typ - 1);
            break;
        case 3:
            int index;
            cout << "Welches Bauteil möchten Sie löschen?\n";
            raketen[rocketIndex].print();
            cin >> index;
            raketen[rocketIndex].loeschen(index);
            break;
        case 4:
            raketen[rocketIndex].aktivieren();
            break;
        case 5:
            for (int i = 0; i < raketen.size(); ++i)
                raketen[i].print();
            break;
    
        case 6: return; 
    }    
    }
}

void Managerklasse::showBauteile(int index)
{
    switch (index) {
        case 1: showSensor(); break;
        case 2: showTriebwerke(); break;
        case 3: showTanks(); break;
        case 4: showNutz(); break;
    }
}

void Managerklasse::addBauteil(int raketenIndex, int select, int typ)
{    
    switch (select) {
        case 1: addSensor(raketenIndex, typ); break;
        case 2: addTriebwerk(raketenIndex, typ); break;
        case 3: addTank(raketenIndex, typ); break;
        case 4: addNutz(raketenIndex, typ); break;
    }
}

void Managerklasse::addTriebwerk(int raketenIndex, int typ)
{
    raketen[raketenIndex].hinzufuegen(&triebwerke[typ]);
}

void Managerklasse::addNutz(int raketenIndex, int typ)
{
    raketen[raketenIndex].hinzufuegen(&nutzlasten[typ]);
}

void Managerklasse::addSensor(int raketenIndex, int typ)
{
    raketen[raketenIndex].hinzufuegen(&sensoren[typ]);
}

void Managerklasse::addTank(int raketenIndex, int typ)
{
    raketen[raketenIndex].hinzufuegen(&tanks[typ]);
}