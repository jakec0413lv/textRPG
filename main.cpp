/* TODO:
-Don't allow skill casting if not enough mana available
-Cleric heal function
-Add a second hero (Why does it go to warrior?)
-Add monster attack loop

*/


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
#include "warrior.h"

using namespace std;

int main() {
    Monster enemy;
    
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
        Knight _knight;
        hero1 = &_knight;
    }

    if(classChoice == "w" || classChoice == "W"){
        Warrior _warrior;
        hero1 = &_warrior;
    }

    if(classChoice == "m" || classChoice == "M"){
        Mage _mage;
        hero1 = &_mage;
    }

    if(classChoice == "c" || classChoice == "C"){
        Cleric _cleric;
        hero1 = &_cleric;
    }

    if(classChoice == "a" || classChoice == "A"){
        Archer _archer;
        hero1 = &_archer;
    }
    
    hero1->display();
    /*
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
        Knight _knight;
        hero2 = &_knight;
    }

    if(classChoice == "w" || classChoice == "W"){
        Warrior _warrior;
        hero2 = &_warrior;
    }

    if(classChoice == "m" || classChoice == "M"){
        Mage _mage;
        hero2 = &_mage;
    }

    if(classChoice == "c" || classChoice == "C"){
        Cleric _cleric;
        hero2 = &_cleric;
    }

    if(classChoice == "a" || classChoice == "A"){
        Archer _archer;
        hero2 = &_archer;
    }

    hero2->display();
    */
    char continueGame;

    do{

    while(hero1->isAlive() || hero2->isAlive()){
        string actionChoice = " ";

        if(hero1->isAlive()){

        cout << enemy << '\n';

        cout << hero1->classType << "'s Turn!" << '\n';
        cout << '\n';

        cout << "What would you like to do?" << '\n';
        cout << "(A)ttack!" << '\n';
        cout << "(S)kill" << '\n';
        cout << "(P)rint Stats" << '\n';
            cin >> actionChoice;
        
        if(actionChoice == "A" || actionChoice == "a"){
            if(hero1->classType == "Knight" || hero1->classType == "Warrior" || hero1->classType == "Archer"){
                enemy.takeDamage(hero1->getCurrentAttack());
            } else{
                enemy.takeDamage(hero1->getCurrentMagicAttack()*.75);
            }
        }

        if(actionChoice == "S" || actionChoice == "s"){
            if(hero1->classType == "Knight"){
                cout << "Armor: " << hero1->getCurrentArmor() << '\n';
                ((Knight *)hero1)->Guard();
                cout << "Armor: " << hero1->getCurrentArmor() << '\n';
            }

            if(hero1->classType == "Warrior"){
                cout << "Armor: " << hero1->getCurrentArmor() << '\n';
                cout << "Attack:" << hero1->getCurrentAttack() << '\n';
                ((Warrior *)hero1)->Rage();
                cout << "Attack Up! Armor Down!" << '\n';
                cout << "Armor: " << hero1->getCurrentArmor() << '\n';
                cout << "Attack:" << hero1->getCurrentAttack() << '\n';

            }
            if(hero1->classType == "Mage"){
                ((Mage *)hero1)->Fireball(enemy);
            }
            /*if(hero1->classType == "Cleric"){
                ((Cleric *)hero1)->Heal(*hero1, *hero1);
            } */

            if(hero1->classType == "Archer"){
                ((Archer *)hero1)->Tripleshot(enemy);
            }
            
        }

        }//End of Hero1 Turn

        if(!(enemy.isAlive())){
            cout << "You killed the monster!" << '\n';
            break;
        }
    }

   
    partyExp += 30;

    if(partyExp >= levelUpExp){
        cout << "******************************" << '\n';
        cout << "Level Up!!" << '\n';
        cout << "******************************" << '\n';
        partyExp = 0;
        hero1->levelUp();
        //hero2->levelUp();
        hero1->display();
        cout << '\n';   
    }

    hero1->postBattleReset();
    enemy.postBattleReset();

    enemy++;

    cout << "Would you like to continue?" << '\n';
        cin >> continueGame;
    }while(continueGame == 'Y' || continueGame == 'y');


    return 0;
}