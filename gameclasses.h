#pragma once
#include "base.h"

class tiranozavr : virtual public NPC
{
public:
    int speed;
    string weapons;
    tiranozavr() {
        health = 100;
        damage = 5;
        speed = 70;
        Tiranozavr = true;
        tirex = false;
        Megazavr = false;
    }
    int getSpeed() {
        return speed;
    }
    void setSpeed(int gold) {
        this->speed = gold;
    }
    void getWeapon() {
        cout << "Какое оружие взять?" << endl;
        cin >> weapons;
        cout << name << " хватает лапками " << weapons << endl;
    }
    void create() override {
        cout << "Вы создали юного тиранозаврика." << endl;
        cout << "Как его зовут?" << endl;
        cin >> name;
        getInfo();
        cout << "Твоя скорость = " << speed << endl;
        getWeapon();
    }
    ~tiranozavr() {
        if (Tiranozavr) {
            cout << "Тиранозаврик увидел метеорит. " << name << " выронил из лапок " << weapons << ". Сожалеем, ваш динозаврик скопытился." << endl;
        }
    }
};
class Tirex : virtual public NPC
{
public:
    int active;
    string magic;
    Tirex() {
        health = 70;
        damage = 15;
        active = 85;
        Tiranozavr = false;
        tirex = true;
        Megazavr = false;
    }
    int getActive() {
        return active;
    }
    void setActive(int gold) {
        this->active = gold;
    }
    void castSpell() {
        cout << "Какой магией обладает динозаврик?" << endl;
        cin >> magic;
        cout << name << " вертит в лапках шар с заклинанием " << magic << endl;
    }
    void create() override {
        cout << "Вы создали юного Тирекса." << endl;
        cout << "Как его зовут?" << endl;
        cin >> name;
        getInfo();
        cout << "Твоя активность = " << active << endl;
        castSpell();
    }
    ~Tirex() {
        if (tirex) {
            cout << "Тирекс увидел метеорит. В лапках динозаврика с именем " << name << " взорвался шар с заклинанием " << magic << ". Сожалеем, ваш динозаврик скопытился." << endl;
        }
    }
};
class megazavr : public tiranozavr, public Tirex {
public:
    megazavr() {
        speed = 50;
        active = 40;
        Tiranozavr = false;
        tirex = false;
        Megazavr = true;
    }
    void create() override {
        cout << "Вы создали Мегазавра" << endl;
        cout << "Как его зовут?" << endl;
        cin >> name;
        getInfo();
        cout << "Ваша скорость = " << speed << endl;
        cout << "Ваша активность = " << active << endl;
        getWeapon();
        castSpell();
    }
    ~megazavr() {
        if (Megazavr) {
            cout << "Мегазавр увидел метеорит. В лапках динозаврика с именем " << name << " взорвался шар с заклинанием " << magic << ", " << weapons << " выпал из лапок" << ". Сожалеем, ваш динозаврик скопытился." << endl;
        }
    }
};
class Player {
public:
    void create(NPC* player) {
        player->create();
    }

};