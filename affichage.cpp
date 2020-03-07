#include <stdio.h>
#include <iostream>
#include "main.cpp"
using namespace std;
class Moteur
{

public:
    int Gettemperature() {
        return temperature;
    }
    void Settemperature(int a) {
        temperature = a;
    }
    int Getniveau_huile() {
        return niveau_huile;
    }
    void Setniveau_huile(int a) {
        niveau_huile = a;
    }
private:
    int temperature = 50;
    int niveau_huile = 60;

};

class Reservoir
{
public:
    int Getniveau_essence() {
        return niveau_essence;
    };
    void Setniveau_essence(int a) {
        niveau_essence = a;
    };
private:
    int niveau_essence = 80;
};


class Pneu
{
public:
    int Getpression() {
        return pression;
    }

    void Setpression(int a) {
        pression = a;
    }

    int Getusure() {
        return usure;
    }

    void Setusure(int a) {
        usure = a;
    }
private:
    int pression = 80;
    int usure = 0;


};

class BoiteDeVitesse
{
public:
    void Setusure(int a) {
        usure = a;
    };
    int Getusure() {
        return usure;
    }
private:
    int usure = 0;
};


class Batterie
{
public:
    int Getcharge() {
        return charge;
    }
    void Setcharge(int a) {
        charge = a;
    }
private:
    int charge = 100;
};

class Suspension
{
public:
    int Getusure() {
        return usure;
    }
    void Setusure(int a) {
        usure = a;
    }
private:
    int usure = 0;

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
private:
    int usure = 0;
};

class Turbo
{
public:
    int Getusure() {
        return usure;
    }
    void Setusure(int a) {
        usure = a;
    }
private:
    int usure = 0;
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
    Turbo turbo;
    Aileron aileron;
    Suspension suspension;
    Batterie batterie;
    BoiteDeVitesse boiteDeVitesse;


};


int main() {
    Car car;
    printf("L'huile du moteur est \x85 %d%c \n",car.moteur.Getniveau_huile(), 37);
    printf("Le moteur est \x85 %d%cC \n", car.moteur.Gettemperature(), 248);//max 900
    printf("Le pneu avant gauche est \x85 %d%c d'usure.\n", car.pneu_avant_gauche.Getusure(),37);
    printf("Le pneu avant droit est \x85 %d%c d'usure.\n", car.pneu_avant_droit.Getusure(), 37);
    printf("Le pneu arri%cre gauche est \x85 %d%c d'usure. \n", 138, car.pneu_arriere_gauche.Getusure(), 37);
    printf("Le pneu arri%cre droit est \x85 %d%c d'usure. \n", 138, car.pneu_arriere_droit.Getusure(), 37);
    printf("La pression du pneu avant gauche est \x85 %d%c de pression.\n", car.pneu_avant_gauche.Getpression(), 37);//Pression
    printf("La pression du pneu avant droit est \x85 %d%c de pression.\n", car.pneu_avant_droit.Getpression(), 37);
    printf("La pression du pneu arri%cre droit est \x85 %d%c de pression.\n", 138, car.pneu_arriere_droit.Getpression(), 37);
    printf("La pression du pneu arri%cre gauche est \x85 %d%c de pression.\n",138, car.pneu_arriere_gauche.Getpression(), 37);
    printf("Le reservoir est \x85 %d%c. \n", car.reservoir.Getniveau_essence(), 37);
    printf("Le turbo est \x85 %d%c d'usure. \n", car.turbo.Getusure(), 37);
    printf("L'aileron est \x85 %d%c d'usure. \n", car.aileron.Getusure(), 37);
    printf("La suspension est \x85 %d%c d'usure. \n", car.suspension.Getusure(), 37);
    printf("La batterie est \x85 %d%c de charge. \n", car.batterie.Getcharge(), 37);



    return 0;
}
