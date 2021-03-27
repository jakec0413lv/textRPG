#include "hero.h"
#include <iostream>

using namespace std;

Hero::Hero(){
     maxHealth = 8;
     currentHealth = 8;
     maxMana = 8;
     currentMana = 8;
     physicalAttack = 8;
     currentAttack = 8;
     magicAttack = 8;
     currentMagicAttack = 8;
     armor = 8;
     currentArmor = 8;
     magicResist = 8;
     currentMagicResist = 8;
     alive = true;
    }

void Hero::levelUp(){
    maxHealth++;
     currentHealth++;
     maxMana++;
     currentMana++;
     physicalAttack++;
     currentAttack++;
     magicAttack++;
     currentMagicAttack++;
     armor++;
     currentArmor++;
     magicResist++;
     currentMagicResist++;
}

    void Hero::postBattleReset(){ 
     currentHealth = maxHealth;
     currentMana = maxMana;
     currentAttack = physicalAttack;
     currentMagicAttack = magicAttack;
     currentArmor = armor;
     magicResist = currentMagicResist;
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
        skills.push_back(s);
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

    ostream &operator<<(ostream &out, const Hero & _Hero){
     cout << "Class:" << _Hero.classType << '\n';
     cout << "Max Health: " << _Hero.maxHealth <<'\n';
     cout << "Current Health: " << _Hero.currentHealth <<'\n';
     cout << "Max Mana: " << _Hero.maxMana <<'\n';
     cout << "Current Mana: " << _Hero.currentMana <<'\n';
     cout << "Physical Attack: " << _Hero.physicalAttack <<'\n';
     cout << "Current Physical Attack: " << _Hero.currentAttack <<'\n';
     cout << "Magic Attack: " << _Hero.magicAttack <<'\n';
     cout << "Current Magic Attack: " << _Hero.currentMagicAttack <<'\n';
     cout << "Armor: " << _Hero.armor <<'\n';
     cout << "Current Armor: " << _Hero.currentArmor <<'\n';
     cout << "Magic Resist: " << _Hero.magicResist <<'\n';
     cout << "Current Magic Resist: " << _Hero.currentMagicResist <<'\n';
        for(int i = 0; i < _Hero.skills.size(); i++){
            cout << "Skill: " << _Hero.skills[i] << '\n';
        }
     return out;
    }

    bool Hero::isAlive(){
        if(currentHealth < 0){
            alive = false;
            return false;
        }else{
            return true;
        }
    }
