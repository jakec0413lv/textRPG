#include "hero.h"
#include <iostream>

using namespace std;

Hero::Hero(){
     maxHealth = 8;
     currentHealth = 8;
     maxMana = 8;
     currentMana = 8;
     physicalAttack = 12;
     currentAttack = 12;
     magicAttack = 8;
     currentMagicAttack = 8;
     armor = 8;
     currentArmor = 8;
     magicResist = 8;
     currentMagicResist = 8;
     alive = true;
    }

void Hero::levelUp(){
    maxHealth += 2;
     currentHealth+=2;
     maxMana+=2;
     currentMana+=2;
     physicalAttack+=2;
     currentAttack+=2;
     magicAttack+=2;
     currentMagicAttack+=2;
     armor+=2;
     currentArmor+=2;
     magicResist+=2;
     currentMagicResist+=2;
}

    void Hero::postBattleReset(){ 
     currentHealth = maxHealth;
     currentMana = maxMana;
     currentAttack = physicalAttack;
     currentMagicAttack = magicAttack;
     currentArmor = armor;
     magicResist = currentMagicResist;
     alive = true;
    }

    int Hero::getMaxHealth(){
        return maxHealth;
    }
    int Hero::getCurrentHealth(){
        return currentHealth;
    }

    int Hero::getMaxMana(){
        return maxMana;
    }
    int Hero::getCurrentMana(){
        return currentMana;
    }

    int Hero::getPhysicalAttack(){
        return physicalAttack;
    }
    int Hero::getCurrentAttack(){
        return currentAttack;
    }

    int Hero::getMagicAttack(){
        return magicAttack;
    }
    int Hero::getCurrentMagicAttack(){
        return currentMagicAttack;
    }

    int Hero::getArmor(){
        return armor;
    }
    int Hero::getCurrentArmor(){
        return currentArmor;
    }

    int Hero::getMagicResist(){
        return magicResist;
    }

    int Hero::getCurrentMagicResist(){
        return currentMagicResist;
    }

    void Hero::addSkill(string s){
        skill = s;
    }

    void Hero::setMaxHealth(int x){
        maxHealth = x;
    }
    void Hero::setCurrentHealth(int x){
        currentHealth = x;
    }

    void Hero::setMaxMana(int x){
        maxMana = x;
    }
    void Hero::setCurrentMana(int x){
        currentMana = x;
    }

    void Hero::setPhysicalAttack(int x){
        physicalAttack = x;
    }
    void Hero::setCurrentAttack(int x){
        currentAttack = x;
    }

    void Hero::setMagicAttack(int x){
        magicAttack = x;
    }
    void Hero::setCurrentMagicAttack(int x){
        currentMagicAttack = x;
    }

    void Hero::setArmor(int x){
        armor = x;
    }
    void Hero::setCurrentArmor(int x){
        currentArmor = x;
    }

    void Hero::setMagicResist(int x){
        magicResist = x;
    }

    void Hero::setCurrentMagicResist(int x){
        currentMagicResist = x;
    }

    void Hero::display(){
     cout << "Class: " << classType << '\n';
     cout << '\n';
     cout << "Max Health: " << getMaxHealth() <<'\n';
     cout << "Current Health: " << getCurrentHealth() <<'\n';
     cout << "Max Mana: " << getMaxMana() <<'\n';
     cout << "Current Mana: " << getCurrentMana() <<'\n';
     cout << "Physical Attack: " << getPhysicalAttack() <<'\n';
     cout << "Current Physical Attack: " << getCurrentAttack() <<'\n';
     cout << "Magic Attack: " << getMagicAttack() <<'\n';
     cout << "Current Magic Attack: " << getCurrentMagicAttack() <<'\n';
     cout << "Armor: " << getArmor() <<'\n';
     cout << "Current Armor: " << getCurrentArmor() <<'\n';
     cout << "Magic Resist: " << getMagicResist() <<'\n';
     cout << "Current Magic Resist: " << getCurrentMagicResist() <<'\n';
    }

    string Hero::getSkill(){
        return skill;
    }
    
    bool Hero::isAlive(){
        if(currentHealth <= 0){
            alive = false;
            return false;
        }else{
            return true;
        }
    }

    void Hero::takeDamage(int damage){
        int temp; 
        temp = currentHealth;
        currentHealth = currentHealth - (damage - .25*armor);
        cout << "The attack did " << temp - currentHealth << " damage!" << '\n'; 
    }
