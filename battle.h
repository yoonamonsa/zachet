#pragma once
#include "gameclasses.h"
#include "eVil.h"


    tiranozavr Tiranozavr;
    Tirex tirex;
    megazavr Megazavr;
    Evil evil1("������ ������");    
    Evil evil2("����������� �����");
    Evil evil3("������� �������");
    Evil evil4("����������� ��������");

    void battleoneone()
    {
        int hitEvil;
        bool fight = true;
        int hitHero;
        while (fight)
        {
            cout << endl;
            cout << "��� ������� ���� = " << evil1.getDamage() << endl;
            hitEvil = Tiranozavr.getHealth() - evil1.getDamage();
            Tiranozavr.setHealth(hitEvil);
            cout << "���� �������� = " << Tiranozavr.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << Tiranozavr.getDamage() << endl;
            hitHero = evil1.getHealth() - Tiranozavr.getDamage();
            evil1.setHealth(hitHero);
            cout << "�������� ���������� = " << evil1.getHealth() << endl;
            if (Tiranozavr.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil1.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    Tiranozavr.setHealth(50 * Tiranozavr.getLvl());
                    cout << "���� �������� ��������� �������������� = " << Tiranozavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil2.getDamage() << endl;
            hitEvil = Tiranozavr.getHealth() - evil2.getDamage();
            Tiranozavr.setHealth(hitEvil);
            cout << "���� �������� = " << Tiranozavr.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << Tiranozavr.getDamage() << endl;
            hitHero = evil2.getHealth() - Tiranozavr.getDamage();
            evil2.setHealth(hitHero);
            cout << "�������� ���������� = " << evil2.getHealth() << endl;
            if (Tiranozavr.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil1.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    Tiranozavr.setHealth(50 * Tiranozavr.getLvl());
                    cout << "���� �������� ��������� �������������� = " << Tiranozavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil3.getDamage() << endl;
            hitEvil = Tiranozavr.getHealth() - evil3.getDamage();
            Tiranozavr.setHealth(hitEvil);
            cout << "���� �������� = " << Tiranozavr.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << Tiranozavr.getDamage() << endl;
            hitHero = evil3.getHealth() - Tiranozavr.getDamage();
            evil3.setHealth(hitHero);
            cout << "�������� ���������� = " << evil3.getHealth() << endl;
            if (Tiranozavr.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil3.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    Tiranozavr.setHealth(50 * Tiranozavr.getLvl());
                    cout << "���� �������� ��������� �������������� = " << Tiranozavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil4.getDamage() << endl;
            hitEvil = Tiranozavr.getHealth() - evil4.getDamage();
            Tiranozavr.setHealth(hitEvil);
            cout << "���� �������� = " << Tiranozavr.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << Tiranozavr.getDamage() << endl;
            hitHero = evil4.getHealth() - Tiranozavr.getDamage();
            evil4.setHealth(hitHero);
            cout << "�������� ���������� = " << evil4.getHealth() << endl;
            if (Tiranozavr.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil4.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    Tiranozavr.setHealth(50 * Tiranozavr.getLvl());
                    cout << "���� �������� ��������� �������������� = " << Tiranozavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil1.getDamage() << endl;
            hitEvil = tirex.getHealth() - evil1.getDamage();
            tirex.setHealth(hitEvil);
            cout << "���� �������� = " << tirex.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << tirex.getDamage() << endl;
            hitHero = evil1.getHealth() - tirex.getDamage();
            evil1.setHealth(hitHero);
            cout << "�������� ���������� = " << evil1.getHealth() << endl;
            if (tirex.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil1.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    tirex.setHealth(50 * tirex.getLvl());
                    cout << "���� �������� ��������� �������������� = " << tirex.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil2.getDamage() << endl;
            hitEvil = tirex.getHealth() - evil2.getDamage();
            tirex.setHealth(hitEvil);
            cout << "���� �������� = " << tirex.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << tirex.getDamage() << endl;
            hitHero = evil2.getHealth() - tirex.getDamage();
            evil2.setHealth(hitHero);
            cout << "�������� ���������� = " << evil2.getHealth() << endl;
            if (tirex.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil2.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    tirex.setHealth(50 * tirex.getLvl());
                    cout << "���� �������� ��������� �������������� = " << tirex.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil3.getDamage() << endl;
            hitEvil = tirex.getHealth() - evil3.getDamage();
            tirex.setHealth(hitEvil);
            cout << "���� �������� = " << tirex.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << tirex.getDamage() << endl;
            hitHero = evil3.getHealth() - tirex.getDamage();
            evil3.setHealth(hitHero);
            cout << "�������� ���������� = " << evil3.getHealth() << endl;
            if (tirex.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil3.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    tirex.setHealth(50 * tirex.getLvl());
                    cout << "���� �������� ��������� �������������� = " << tirex.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil4.getDamage() << endl;
            hitEvil = tirex.getHealth() - evil4.getDamage();
            tirex.setHealth(hitEvil);
            cout << "���� �������� = " << tirex.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << tirex.getDamage() << endl;
            hitHero = evil4.getHealth() - tirex.getDamage();
            evil4.setHealth(hitHero);
            cout << "�������� ���������� = " << evil4.getHealth() << endl;
            if (tirex.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil4.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    tirex.setHealth(50 * tirex.getLvl());
                    cout << "���� �������� ��������� �������������� = " << tirex.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil1.getDamage() << endl;
            hitEvil = Megazavr.getHealth() - evil1.getDamage();
            Megazavr.setHealth(hitEvil);
            cout << "���� �������� = " << Megazavr.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << Megazavr.getDamage() << endl;
            hitHero = evil1.getHealth() - Megazavr.getDamage();
            evil1.setHealth(hitHero);
            cout << "�������� ���������� = " << evil1.getHealth() << endl;
            if (Megazavr.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil1.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    Megazavr.setHealth(50 * Megazavr.getLvl());
                    cout << "���� �������� ��������� �������������� = " << Megazavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil2.getDamage() << endl;
            hitEvil = Megazavr.getHealth() - evil2.getDamage();
            Megazavr.setHealth(hitEvil);
            cout << "���� �������� = " << Megazavr.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << Megazavr.getDamage() << endl;
            hitHero = evil2.getHealth() - Megazavr.getDamage();
            evil2.setHealth(hitHero);
            cout << "�������� ���������� = " << evil2.getHealth() << endl;
            if (Megazavr.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil2.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    Megazavr.setHealth(50 * Megazavr.getLvl());
                    cout << "���� �������� ��������� �������������� = " << Megazavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil3.getDamage() << endl;
            hitEvil = Megazavr.getHealth() - evil3.getDamage();
            Megazavr.setHealth(hitEvil);
            cout << "���� �������� = " << Megazavr.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << Megazavr.getDamage() << endl;
            hitHero = evil3.getHealth() - Megazavr.getDamage();
            evil3.setHealth(hitHero);
            cout << "�������� ���������� = " << evil3.getHealth() << endl;
            if (Megazavr.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil3.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    Megazavr.setHealth(50 * Megazavr.getLvl());
                    cout << "���� �������� ��������� �������������� = " << Megazavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
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
            //���� ���
            cout << endl;
            cout << "��� ������� ���� = " << evil4.getDamage() << endl;
            hitEvil = Megazavr.getHealth() - evil4.getDamage();
            Megazavr.setHealth(hitEvil);
            cout << "���� �������� = " << Megazavr.getHealth() << endl;
            //����� ��
            cout << "�� ������� ���� = " << Megazavr.getDamage() << endl;
            hitHero = evil4.getHealth() - Megazavr.getDamage();
            evil4.setHealth(hitHero);
            cout << "�������� ���������� = " << evil4.getHealth() << endl;
            if (Megazavr.getHealth() <= 0)
            {
                cout << "�� ������� = " << endl;
                fight = false;
            }
            if (evil4.getHealth() <= 0)
            {
                cout << "�� ��������!" << endl;
                cout << "������� ���������?\n1 - ��\n2 - ���";
                int relax;
                cin >> relax;
                if (relax == 1) {
                    cout << "�� ���� ��������\n��������� 1 ������ �� ������� �������������� ��������" << endl;
                    Sleep(60000);
                    Megazavr.setHealth(50 * Megazavr.getLvl());
                    cout << "���� �������� ��������� �������������� = " << Megazavr.getHealth() << "hp" << endl;
                }
                else {
                    cout << "�� ����������� ����" << endl;
                }
                fight = false;
            }
        }
    }