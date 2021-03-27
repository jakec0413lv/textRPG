#include "cleric.h"
#include <iostream>

using namespace std;

Cleric::Cleric(){
     classType = "Cleric";
     Hero::setMaxHealth(Hero::getMaxHealth() - 2);
     Hero::setCurrentHealth(Hero::getCurrentHealth() - 2);
     Hero::setMaxMana(Hero::getMaxMana() + 5);
     Hero::setCurrentMana(Hero::getCurrentMana() + 5);
     Hero::setMagicAttack(Hero::getMagicAttack() + 2);
     Hero::setCurrentMagicAttack(Hero::getCurrentMagicAttack() + 2);
     Hero::setArmor(Hero::getArmor() - 4);
     Hero::setCurrentArmor(Hero::getCurrentArmor() - 4);
     Hero::addSkill("Heal: Restore health of you and your ally! (5 MP)");
    }

void Cleric::Heal(Hero _hero1, Hero _hero2){
    _hero1.setCurrentHealth(_hero1.getCurrentHealth() + 4);

    if(_hero1.getCurrentHealth() > _hero1.getMaxHealth()){
        _hero1.setCurrentHealth(_hero1.getMaxHealth());
    }

    _hero2.setCurrentHealth(_hero2.getCurrentHealth() + 4);
    
    if(_hero2.getCurrentHealth() > _hero2.getMaxHealth()){
        _hero2.setCurrentHealth(_hero2.getMaxHealth());
    }

    setCurrentMana(getCurrentMana() - 5);
}

void Cleric::Attack(Monster _monster){
    _monster.Monster::takeMagicDamage(getMagicAttack());
}