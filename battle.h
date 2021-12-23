#pragma once
#include "gameclasses.h"
#include "eVil.h"


    tiranozavr Tiranozavr;
    Tirex tirex;
    megazavr Megazavr;
    Evil evil1("Пухлый дракон");    
    Evil evil2("Агрессивный щенок");
    Evil evil3("Злобный охотник");
    Evil evil4("Завистливый динозавр");

    void battleoneone()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            cout << endl;
            cout << "Вам нанесли урон = " << evil1.getDamage() << endl;
            hitEvil = Tiranozavr.getHealth() - evil1.getDamage();
            Tiranozavr.setHealth(hitEvil);
            cout << "Ваше здоровье = " << Tiranozavr.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << Tiranozavr.getDamage() << endl;
            hitHero = evil1.getHealth() - Tiranozavr.getDamage();
            evil1.setHealth(hitHero);
            cout << "Здоровье противника = " << evil1.getHealth() << endl;
            if (Tiranozavr.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil1.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    Tiranozavr.setHealth(50 * Tiranozavr.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << Tiranozavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }

        }
    }
    void battleonetwo()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil2.getDamage() << endl;
            hitEvil = Tiranozavr.getHealth() - evil2.getDamage();
            Tiranozavr.setHealth(hitEvil);
            cout << "Ваше здоровье = " << Tiranozavr.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << Tiranozavr.getDamage() << endl;
            hitHero = evil2.getHealth() - Tiranozavr.getDamage();
            evil2.setHealth(hitHero);
            cout << "Здоровье противника = " << evil2.getHealth() << endl;
            if (Tiranozavr.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil1.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    Tiranozavr.setHealth(50 * Tiranozavr.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << Tiranozavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }

        }

    }
    void battleonethree()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil3.getDamage() << endl;
            hitEvil = Tiranozavr.getHealth() - evil3.getDamage();
            Tiranozavr.setHealth(hitEvil);
            cout << "Ваше здоровье = " << Tiranozavr.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << Tiranozavr.getDamage() << endl;
            hitHero = evil3.getHealth() - Tiranozavr.getDamage();
            evil3.setHealth(hitHero);
            cout << "Здоровье противника = " << evil3.getHealth() << endl;
            if (Tiranozavr.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil3.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    Tiranozavr.setHealth(50 * Tiranozavr.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << Tiranozavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }

        }
    }
    void battleonefour()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil4.getDamage() << endl;
            hitEvil = Tiranozavr.getHealth() - evil4.getDamage();
            Tiranozavr.setHealth(hitEvil);
            cout << "Ваше здоровье = " << Tiranozavr.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << Tiranozavr.getDamage() << endl;
            hitHero = evil4.getHealth() - Tiranozavr.getDamage();
            evil4.setHealth(hitHero);
            cout << "Здоровье противника = " << evil4.getHealth() << endl;
            if (Tiranozavr.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil4.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    Tiranozavr.setHealth(50 * Tiranozavr.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << Tiranozavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }

        }
    }
    void battletwoone()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil1.getDamage() << endl;
            hitEvil = tirex.getHealth() - evil1.getDamage();
            tirex.setHealth(hitEvil);
            cout << "Ваше здоровье = " << tirex.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << tirex.getDamage() << endl;
            hitHero = evil1.getHealth() - tirex.getDamage();
            evil1.setHealth(hitHero);
            cout << "Здоровье противника = " << evil1.getHealth() << endl;
            if (tirex.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil1.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    tirex.setHealth(50 * tirex.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << tirex.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }

        }
    }
    void battletwotwo()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil2.getDamage() << endl;
            hitEvil = tirex.getHealth() - evil2.getDamage();
            tirex.setHealth(hitEvil);
            cout << "Ваше здоровье = " << tirex.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << tirex.getDamage() << endl;
            hitHero = evil2.getHealth() - tirex.getDamage();
            evil2.setHealth(hitHero);
            cout << "Здоровье противника = " << evil2.getHealth() << endl;
            if (tirex.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil2.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    tirex.setHealth(50 * tirex.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << tirex.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }

        }
    }
    void battletwothree()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil3.getDamage() << endl;
            hitEvil = tirex.getHealth() - evil3.getDamage();
            tirex.setHealth(hitEvil);
            cout << "Ваше здоровье = " << tirex.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << tirex.getDamage() << endl;
            hitHero = evil3.getHealth() - tirex.getDamage();
            evil3.setHealth(hitHero);
            cout << "Здоровье противника = " << evil3.getHealth() << endl;
            if (tirex.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil3.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    tirex.setHealth(50 * tirex.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << tirex.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }

        }
    }
    void battletwofour()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil4.getDamage() << endl;
            hitEvil = tirex.getHealth() - evil4.getDamage();
            tirex.setHealth(hitEvil);
            cout << "Ваше здоровье = " << tirex.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << tirex.getDamage() << endl;
            hitHero = evil4.getHealth() - tirex.getDamage();
            evil4.setHealth(hitHero);
            cout << "Здоровье противника = " << evil4.getHealth() << endl;
            if (tirex.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil4.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    tirex.setHealth(50 * tirex.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << tirex.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }

        }
    }
    void battlethreeone()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil1.getDamage() << endl;
            hitEvil = Megazavr.getHealth() - evil1.getDamage();
            Megazavr.setHealth(hitEvil);
            cout << "Ваше здоровье = " << Megazavr.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << Megazavr.getDamage() << endl;
            hitHero = evil1.getHealth() - Megazavr.getDamage();
            evil1.setHealth(hitHero);
            cout << "Здоровье противника = " << evil1.getHealth() << endl;
            if (Megazavr.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil1.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    Megazavr.setHealth(50 * Megazavr.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << Megazavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }
        }
    }
    void battlethreetwo()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil2.getDamage() << endl;
            hitEvil = Megazavr.getHealth() - evil2.getDamage();
            Megazavr.setHealth(hitEvil);
            cout << "Ваше здоровье = " << Megazavr.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << Megazavr.getDamage() << endl;
            hitHero = evil2.getHealth() - Megazavr.getDamage();
            evil2.setHealth(hitHero);
            cout << "Здоровье противника = " << evil2.getHealth() << endl;
            if (Megazavr.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil2.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    Megazavr.setHealth(50 * Megazavr.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << Megazavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }
        }
    }
    void battlethreethree()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil3.getDamage() << endl;
            hitEvil = Megazavr.getHealth() - evil3.getDamage();
            Megazavr.setHealth(hitEvil);
            cout << "Ваше здоровье = " << Megazavr.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << Megazavr.getDamage() << endl;
            hitHero = evil3.getHealth() - Megazavr.getDamage();
            evil3.setHealth(hitHero);
            cout << "Здоровье противника = " << evil3.getHealth() << endl;
            if (Megazavr.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil3.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    Megazavr.setHealth(50 * Megazavr.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << Megazavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }
        }
    }
    void battlethreefour()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            //бьет вас
            cout << endl;
            cout << "Вам нанесли урон = " << evil4.getDamage() << endl;
            hitEvil = Megazavr.getHealth() - evil4.getDamage();
            Megazavr.setHealth(hitEvil);
            cout << "Ваше здоровье = " << Megazavr.getHealth() << endl;
            //бьете вы
            cout << "Вы нанесли урон = " << Megazavr.getDamage() << endl;
            hitHero = evil4.getHealth() - Megazavr.getDamage();
            evil4.setHealth(hitHero);
            cout << "Здоровье противника = " << evil4.getHealth() << endl;
            if (Megazavr.getHealth() <= 0)
            {
                cout << "Вы погибли = " << endl;
                fight = false;
            }
            if (evil4.getHealth() <= 0)
            {
                cout << "Вы победили!" << endl;
                cout << "Желаете отдохнуть?\n1 - Да\n2 - Нет";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "Вы сели отдыхать\nПодождите 1 минуту до полного восстановления здоровья" << endl;
                    Sleep(60000);
                    Megazavr.setHealth(50 * Megazavr.getLvl());
                    cout << "Ваше здоровье полностью восстановилось = " << Megazavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "Вы продолжаете путь" << endl;
                }
                fight = false;
            }
        }
    }