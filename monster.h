#pragma once

#include <vector>
#include <string>

using namespace std;

class Monster{

    friend ostream &operator<<(ostream &, const Monster &); //Done (?)
    
    public:

    Monster();
    int getMaxHealth();
    int getCurrentHealth();
    int getMaxMana();
    int getCurrentMana();
    int getPhysicalAttack();
    int getCurrentAttack();
    int getMagicAttack();
    int getCurrentMagicAttack();
    int getArmor();
    int getCurrentArmor();
    int getMagicResist();
    int getCurrentMagicResist();
    void addSkill(string );

    void setMaxHealth(int );
    void setCurrentHealth(int );
    void setMaxMana(int );
    void setCurrentMana(int );
    void setPhysicalAttack(int );
    void setCurrentAttack(int );
    void setMagicAttack(int );
    void setCurrentMagicAttack(int );
    void setArmor(int );
    void setCurrentArmor(int );
    void setMagicResist(int );
    void setCurrentMagicResist(int );

    void takeDamage(int );
    void takeMagicDamage(int );
    void postBattleReset();
    
    Monster operator++(int );

    bool isAlive();

    private:
    int maxHealth;
    int currentHealth;
    int maxMana;
    int currentMana;
    int physicalAttack;
    int currentAttack;
    int magicAttack;
    int currentMagicAttack;
    int armor;
    int currentArmor;
    int magicResist;
    int currentMagicResist;
    vector<string> skills;
    bool alive;
    string classType;
};