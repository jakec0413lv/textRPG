#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <stdio.h>
#include <ctype.h>

#include "hero.h"
#include "monster.h"
#include "Knight.h"
#include "Mage.h"
#include "archer.h"
#include "cleric.h"

using namespace std;

int main() {

    Hero *hero1;
    Hero *hero2;

    string classChoice;

    int partyExp = 0;
    int levelUpExp = 100;

    while(classChoice !=  "k" && classChoice !=  "K" &&  classChoice !=  "w"  && classChoice !=  "W" &&  
    classChoice !=  "m" && classChoice !=  "M" &&  classChoice !=  "c" && classChoice !=  "C" 
    &&  classChoice !=  "a" && classChoice !=  "A"){

    cout << "What class would you like your first adventurer to be?" << '\n';
    cout << '\n';
    cout << "(K)night: Higher Health & Armor, but very low Magic Attack" << '\n';
    cout << "(W)arrior: Higher Physical Attack, but much lower Armor" << '\n';
    cout << "(M)age: Very High Magic Damage output, lower Health & Armor" << '\n';
    cout << "(C)leric: Lower Magic Attack than Mage, but has ability to heal" << '\n';
    cout << "(A)rcher: Higher Physical Attack, lower health & armor" << '\n';

    cin >> classChoice;
    }

    if(classChoice == "k" || classChoice == "K"){
        hero1 = new Knight;
    }

    if(classChoice == "w" || classChoice == "W"){
        //hero1 = new Warrior;
    }

    if(classChoice == "m" || classChoice == "M"){
        hero1 = new Mage;
    }

    if(classChoice == "c" || classChoice == "C"){
        hero1 = new Cleric;
    }

    if(classChoice == "a" || classChoice == "A"){
        hero1 = new Archer;
    }
    
    classChoice = "";
    cout << '\n';

    while(classChoice !=  "k" && classChoice !=  "K" &&  classChoice !=  "w"  && classChoice !=  "W" &&  
    classChoice !=  "m" && classChoice !=  "M" &&  classChoice !=  "c" && classChoice !=  "C" 
    &&  classChoice !=  "a" && classChoice !=  "A"){

    cout << "What class would you like your second adventurer to be?" << '\n';
    cout << '\n';
    cout << "(K)night: Higher Health & Armor, but very low Magic Attack" << '\n';
    cout << "(W)arrior: Higher Physical Attack, but much lower Armor" << '\n';
    cout << "(M)age: Very High Magic Damage output, lower Health & Armor" << '\n';
    cout << "(C)leric: Lower Magic Attack than Mage, but has ability to heal" << '\n';
    cout << "(A)rcher: High Skill Damage, average all around stats" << '\n';

    cin >> classChoice;
    }

    if(classChoice == "k" || classChoice == "K"){
        hero2 = new Knight;
    }

    if(classChoice == "w" || classChoice == "W"){
        //hero2 = new Warrior;
    }

    if(classChoice == "m" || classChoice == "M"){
        hero2 = new Mage;
    }

    if(classChoice == "c" || classChoice == "C"){
        hero2 = new Cleric;
    }

    if(classChoice == "a" || classChoice == "A"){
        hero2 = new Archer;
    }
 
    cout << *hero1;
    cout << '\n';
    cout << *hero2;
    
    delete hero1;
    delete hero2;

    return 0;
}