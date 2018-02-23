/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: snbl
 *
 * Created on February 22, 2018, 3:10 PM
 */

#include <cstdlib>
#include <iostream>
#include "Triebwerk.h"
#include "Tank.h"
#include "Nutzlast.h"
#include "Rakete.h"

using namespace std;



int main(int argc, char** argv) {
    
    Tank tank1("fuck", 23 ,23, 34);
    Tank tank2("knack", 25, 45.4, 43);
    Tank tank3("hack", 34, 343, 34);
    
    Nutzlast nutz1("nutz", 123);
    Nutzlast nutz2("schmutz", 34);
    Nutzlast nutz3("hutz", 234);
    
    Triebwerk trieb1("Schnellbrumm", 23, 54, 123);
    Triebwerk trieb2("Scmleklbrumm", 34, 34, 33);
    
    Rakete r("fickhure");
    r.hinzufuegen(&tank1);
    r.hinzufuegen(&tank2);
    r.hinzufuegen(&tank3);
    
    r.hinzufuegen(&nutz1);
    r.hinzufuegen(&nutz2);
    r.hinzufuegen(&nutz3);
    
    r.hinzufuegen(&trieb1);
    r.hinzufuegen(&trieb2);
    r.print();
 
    return 0;
}

