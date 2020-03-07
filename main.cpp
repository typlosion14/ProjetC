#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Time {
public:
    void Updatetime(int a = 0) {
        sec = sec + a;
        while (sec >= 60) {
            min = min + 1;
            sec = sec - 60;
        }
    }
    string Gettime() {
        Updatetime();
        string r = to_string(min) + "m" + to_string(sec);
        return r;
    }
private:
    int min = 0;
    int sec = 121;
};

class Moteur
{
public:
    int Gettemperature() {
        return temperature;
    };
    void Settemperature(int a) {
        temperature = a;
    };
    int Gethuile() {
        return huile;
    };
    void Sethuile(int a) {
        huile = a;
    };
    void Refill() {
        huile = 100;
    };
    int Gettime() {
        return time;
    };
private:
    int temperature = 70;
    int huile = 60;
    int time = 10;
};


class Reservoir
{
public:
    int Getessence() {
        return essence;
    };
    void Setessence(int a) {
        essence = a;
    };
    void Refill() {
        essence = 100;
    };
    int Gettime() {
        return time;
    };
private:
    int essence = 80;
    int time = 10;
};


class Pneu
{
public:
    int Getpression() {
        return pression;
    };
    void Setpression(int a) {
        pression = a;
    };
    int Getusure() {
        return usure;
    };
    void Setusure(int a) {
        usure = a;
    };
    void Change() {
        pression = 0;
        usure = 0;
    };
    int Gettime() {
        return time;
    };
private:
    int pression = 80;
    int usure = 0;
    int time = 10;
};


class BoiteDeVitesse
{
public:
    void Setusure(int a) {
        usure = a;
    };
    int Getusure() {
        return usure;
    };
    void Change() {
        usure = 0;
    };
    int Gettime() {
        return time;
    };
private:
    int usure = 0;
    int time = 10;
};


class Batterie
{
public:
    int Getcharge() {
        return charge;
    };
    void Setcharge(int a) {
        charge = a;
    };
    void Change() {
        charge = 100;
    };
    int Gettime() {
        return time;
    };
private:
    int charge = 100;
    int time = 10;
};


class Suspension
{
public:
    int Getusure() {
        return usure;
    };
    void Setusure(int a) {
        usure = a;
    };
    void Change() {
        usure = 0;
    };
    int Gettime() {
        return time;
    };
private:
    int usure = 0;
    int time = 10;
};


class Aileron
{
public:
    int Getusure() {
        return usure;
    };
    void Setusure(int a) {
        usure = a;
    };
    void Change() {
        usure = 0;
    };
    int Gettime() {
        return time;
    };
private:
    int usure = 0;
    int time = 10;
};


class Turbo
{
public:
    int Getusure() {
        return usure;
    };
    void Setusure(int a) {
        usure = a;
    };
    void Change() {
        usure = 0;
    };
    int Gettime() {
        return time;
    };
private:
    int usure = 0;
    int time = 10;
};


class Car
{
public:
    Moteur moteur;
    Pneu pneu_avant_gauche;
    Pneu pneu_arriere_gauche;
    Pneu pneu_avant_droit;
    Pneu pneu_arriere_droit;
    Reservoir reservoir;
    BoiteDeVitesse boitedevitesse;
    Batterie batterie;
    Suspension suspension;
    Aileron aileron;
    Turbo turbo;

    void Change_pneu() {
        pneu_avant_gauche.Change();
        pneu_avant_droit.Change();
        pneu_arriere_gauche.Change();
        pneu_arriere_droit.Change();
    };
};

