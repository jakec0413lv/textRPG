/* TODO:
-Don't allow skill casting if not enough mana available
-Cleric heal function

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
        hero1 = new Knight;
    }

    if(classChoice == "w" || classChoice == "W"){
        hero1 = new Warrior;
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
    
    hero1->display();
    
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
        hero2 = new Warrior;
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

    hero2->display();

    char continueGame;

    do{

    while(hero1->isAlive() || hero2->isAlive()){
        string actionChoice = " ";

        if(hero1->isAlive()){

        cout << enemy << '\n';

        cout << hero1->classType << "'s Turn!" << '\n';
        cout << '\n';
        hero1->display();

        cout << "What would you like to do?" << '\n';
        cout << "(A)ttack!" << '\n';
        cout << "(S)kill" << '\n';
        cout << '\n';
            cin >> actionChoice;
        
        if(actionChoice == "A" || actionChoice == "a"){
            if(hero1->classType == "Knight" || hero1->classType == "Warrior" || hero1->classType == "Archer"){
                enemy.takeDamage(hero1->getCurrentAttack());
            } else{
                enemy.takeDamage(hero1->getCurrentMagicAttack()*.75);
            }
        }

        if(actionChoice == "S" || actionChoice == "s"){
            if(dynamic_cast<Knight*>(hero1)){
                cout << "Armor: " << hero1->getCurrentArmor() << '\n';
                ((Knight *)hero1)->Guard();
                cout << "Armor: " << hero1->getCurrentArmor() << '\n';
            }

            if(dynamic_cast<Warrior*>(hero1)){
                cout << "Armor: " << hero1->getCurrentArmor() << '\n';
                cout << "Attack:" << hero1->getCurrentAttack() << '\n';
                ((Warrior *)hero1)->Rage();
                cout << "Attack Up! Armor Down!" << '\n';
                cout << "Armor: " << hero1->getCurrentArmor() << '\n';
                cout << "Attack:" << hero1->getCurrentAttack() << '\n';

            }
            if(dynamic_cast<Mage*>(hero1)){
                ((Mage *)hero1)->Fireball(enemy);
            }
            /*if(dynamic_cast<Cleric*>(hero1))
                ((Cleric *)hero1)->Heal(*hero1, *hero1);
            } */

            if(dynamic_cast<Archer*>(hero1)){
                ((Archer *)hero1)->Tripleshot(enemy);
            }
            
        }

        }//End of Hero1 Turn

        if(!(enemy.isAlive())){
            cout << "You killed the monster!" << '\n';
            break;
        }

        cout << "Monster's turn!" << '\n';
        enemy.attack(*hero1);

        if(!(hero1->isAlive()) && !(hero2->isAlive())){
            cout << "You died..." << '\n';
            break;
        }

        if(hero2->isAlive()){

        cout << enemy << '\n';

        cout << hero2->classType << "'s Turn!" << '\n';
        cout << '\n';
        hero2->display();

        cout << "What would you like to do?" << '\n';
        cout << "(A)ttack!" << '\n';
        cout << "(S)kill" << '\n';
        cout << '\n';
            cin >> actionChoice;
        
        if(actionChoice == "A" || actionChoice == "a"){
            if(hero2->classType == "Knight" || hero2->classType == "Warrior" || hero2->classType == "Archer"){
                enemy.takeDamage(hero2->getCurrentAttack());
            } else{
                enemy.takeDamage(hero2->getCurrentMagicAttack()*.75);
            }
        }

        if(actionChoice == "S" || actionChoice == "s"){
            if(dynamic_cast<Knight*>(hero2)){
                cout << "Armor: " << hero2->getCurrentArmor() << '\n';
                ((Knight *)hero2)->Guard();
                cout << "Armor: " << hero2->getCurrentArmor() << '\n';
            }

            if(dynamic_cast<Warrior*>(hero2)){
                cout << "Armor: " << hero2->getCurrentArmor() << '\n';
                cout << "Attack:" << hero2->getCurrentAttack() << '\n';
                ((Warrior *)hero2)->Rage();
                cout << "Attack Up! Armor Down!" << '\n';
                cout << "Armor: " << hero2->getCurrentArmor() << '\n';
                cout << "Attack:" << hero2->getCurrentAttack() << '\n';

            }
            if(dynamic_cast<Mage*>(hero2)){
                ((Mage *)hero2)->Fireball(enemy);
            }
            /*if(dynamic_cast<Cleric*>(hero2))
                ((Cleric *)hero2)->Heal(*hero2, *hero2);
            } */

            if(dynamic_cast<Archer*>(hero2)){
                ((Archer *)hero2)->Tripleshot(enemy);
            }
            
        }
        }//End of Hero2 Turn

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
        hero2->levelUp();

        hero1->display();
        cout << '\n';
        hero2->display();
        cout << '\n';      
    }

    hero1->postBattleReset();
    hero2->postBattleReset();
    enemy.postBattleReset();

    enemy++;

    cout << "Would you like to continue?" << '\n';
        cin >> continueGame;
    }while(continueGame == 'Y' || continueGame == 'y');


    return 0;
}