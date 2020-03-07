#include <stdio.h>
#include <iostream>
#include "main.cpp"
using namespace std;
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
