#include "monster.h"
#include <iostream>

using namespace std;

Monster::Monster(){
     maxHealth = 30;
     currentHealth = 30;
     maxMana = 8;
     currentMana = 8;
     physicalAttack = 12;
     currentAttack = 12;
     magicAttack = 8;
     currentMagicAttack = 8;
     armor = 12;
     currentArmor = 12;
     magicResist = 8;
     currentMagicResist = 8;
     alive = true;
    }

    int Monster::getMaxHealth(){
        return maxHealth;
    }
    int Monster::getCurrentHealth(){
        return currentHealth;
    }

    int Monster::getMaxMana(){
        return maxMana;
    }
    int Monster::getCurrentMana(){
        return currentMana;
    }

    int Monster::getPhysicalAttack(){
        return physicalAttack;
    }
    int Monster::getCurrentAttack(){
        return currentAttack;
    }

    int Monster::getMagicAttack(){
        return magicAttack;
    }
    int Monster::getCurrentMagicAttack(){
        return currentMagicAttack;
    }

    int Monster::getArmor(){
        return armor;
    }
    int Monster::getCurrentArmor(){
        return currentArmor;
    }

    int Monster::getMagicResist(){
        return magicResist;
    }

    int Monster::getCurrentMagicResist(){
        return currentMagicResist;
    }

    void Monster::addSkill(string s){
        skills.push_back(s);
    }

    void Monster::setMaxHealth(int x){
        maxHealth = x;
    }
    void Monster::setCurrentHealth(int x){
        currentHealth = x;
    }

    void Monster::setMaxMana(int x){
        maxMana = x;
    }
    void Monster::setCurrentMana(int x){
        currentMana = x;
    }

    void Monster::setPhysicalAttack(int x){
        physicalAttack = x;
    }
    void Monster::setCurrentAttack(int x){
        currentAttack = x;
    }

    void Monster::setMagicAttack(int x){
        magicAttack = x;
    }
    void Monster::setCurrentMagicAttack(int x){
        currentMagicAttack = x;
    }

    void Monster::setArmor(int x){
        armor = x;
    }
    void Monster::setCurrentArmor(int x){
        currentArmor = x;
    }

    void Monster::setMagicResist(int x){
        magicResist = x;
    }

    void Monster::setCurrentMagicResist(int x){
        currentMagicResist = x;
    }

    ostream &operator<<(ostream &out, const Monster & _Monster){
     cout << "Max Health: " << _Monster.maxHealth <<'\n';
     cout << "Current Health: " << _Monster.currentHealth <<'\n';
     cout << "Max Mana: " << _Monster.maxMana <<'\n';
     cout << "Current Mana: " << _Monster.currentMana <<'\n';
     cout << "Physical Attack: " << _Monster.physicalAttack <<'\n';
     cout << "Current Physical Attack: " << _Monster.currentAttack <<'\n';
     cout << "Magic Attack: " << _Monster.magicAttack <<'\n';
     cout << "Current Magic Attack: " << _Monster.currentMagicAttack <<'\n';
     cout << "Armor: " << _Monster.armor <<'\n';
     cout << "Current Armor: " << _Monster.currentArmor <<'\n';
     cout << "Magic Resist: " << _Monster.magicResist <<'\n';
     cout << "Current Magic Resist: " << _Monster.currentMagicResist <<'\n';
        for(int i = 0; i < _Monster.skills.size(); i++){
            cout << "Skill: " << _Monster.skills[i] << '\n';
        }
     return out;
    }

    bool Monster::isAlive(){
        if(currentHealth < 0){
            alive = false;
            return false;
        }else{
            return true;
        }
    }

    void Monster::takeDamage(int damage){
        currentHealth = currentHealth - (damage - .25*currentArmor);
    }

    void Monster::takeMagicDamage(int damage){
        currentHealth = currentHealth - (damage - .25*currentMagicResist);
    }