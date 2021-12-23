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
        cout << "����� ������ �����?" << endl;
        cin >> weapons;
        cout << name << " ������� ������� " << weapons << endl;
    }
    void create() override {
        cout << "�� ������� ����� �������������." << endl;
        cout << "��� ��� �����?" << endl;
        cin >> name;
        getInfo();
        cout << "���� �������� = " << speed << endl;
        getWeapon();
    }
    ~tiranozavr() {
        if (Tiranozavr) {
            cout << "������������ ������ ��������. " << name << " ������� �� ����� " << weapons << ". ��������, ��� ���������� ����������." << endl;
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
        cout << "����� ������ �������� ����������?" << endl;
        cin >> magic;
        cout << name << " ������ � ������ ��� � ����������� " << magic << endl;
    }
    void create() override {
        cout << "�� ������� ����� �������." << endl;
        cout << "��� ��� �����?" << endl;
        cin >> name;
        getInfo();
        cout << "���� ���������� = " << active << endl;
        castSpell();
    }
    ~Tirex() {
        if (tirex) {
            cout << "������ ������ ��������. � ������ ����������� � ������ " << name << " ��������� ��� � ����������� " << magic << ". ��������, ��� ���������� ����������." << endl;
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
        cout << "�� ������� ���������" << endl;
        cout << "��� ��� �����?" << endl;
        cin >> name;
        getInfo();
        cout << "���� �������� = " << speed << endl;
        cout << "���� ���������� = " << active << endl;
        getWeapon();
        castSpell();
    }
    ~megazavr() {
        if (Megazavr) {
            cout << "�������� ������ ��������. � ������ ����������� � ������ " << name << " ��������� ��� � ����������� " << magic << ", " << weapons << " ����� �� �����" << ". ��������, ��� ���������� ����������." << endl;
        }
    }
};
class Player {
public:
    void create(NPC* player) {
        player->create();
    }

};