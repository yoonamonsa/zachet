#pragma once
#include <iostream>
using namespace std;
class NPC {
protected:
    bool Tiranozavr;
    bool tirex;
    bool Megazavr;
    int health;
    int damage;
    int lvl;

public:
    string name;
    NPC() {
        Tiranozavr = false;
        tirex = false;
        Megazavr = false;
        lvl = 1;
    }
    virtual void getStats() {}
    virtual void create() {}
    virtual void getInfo() {
        cout << "Привет, динозаврик " << name << endl;
        cout << "Твои лапки бьют на " << damage << " единиц." << endl;
        cout << "Твое здоровье =  " << health << endl;
    }
    void lvlUp() {
        this->lvl++;
    }
    int getLvl() {
        return lvl;
    }
    int getDamage() {
        return damage;
    }
    void setDamage(int damage) {
        this->damage = damage;
    }
    int getHealth() {
        return health;
    }
    void setHealth(int health) {
        this->health = health;
    }
};


