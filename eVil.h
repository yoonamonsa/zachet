#pragma once
#include "base.h"

class Evil : public NPC {
public:
    Evil(string name) {
        this->name = name;
        health = -1;
        damage = -1;
    }
    Evil(string name, int health) {
        this->name = name;
        this->health = health;
        damage = -1;
    }
    Evil(string name, int health, int damage) {
        this->name = name;
        this->health = health;
        this->damage = damage;
    }
    virtual void getStats() override {
        cout << endl;
        cout << "На вас напал " << name << endl;
        if (health >= 0 && damage < 0) {
            cout << "Здоровье - " << health << endl;
        }
        if (health < 0 && damage >= 0) {
            cout << "урон - " << damage << endl;
        }
        if (health >= 0 && damage >= 0) {
            cout << "Здоровье - " << health << endl;
            cout << "урон - " << damage << endl;
        }
    }
    
};