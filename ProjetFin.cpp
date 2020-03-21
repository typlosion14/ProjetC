#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <array>
#include "main.cpp"


using namespace std;

array<Car, 20> Cargenerator() {
    srand(time(NULL));
    array<Car, 20> panda;
    for (int i = 0; i < 20; i++) {
        Car Voiture("Voiture Numero " + to_string(i + 1),rand() % 4 + 1);
        panda[i] = Voiture;
    }
    return panda;
}
    
int main(){
    srand (time(NULL));
    
    string r;
    //Initialisation Voiture 1
    cout << "Choissisez un nom pour la Voiture 1: " << endl;
    cin >> r;
    Car Voiture1("1:" + r);
    //Initialisation Voiture 2
    cout << "Choissisez un nom pour la Voiture 2: " << endl;
    cin >> r;
    Car Voiture2("2:" + r);

    array<Car, 20>Voitures = Cargenerator();
    while (Voiture1.circuit.GetTurn() < 50) {
        Voiture1.course();
        Voiture2.course();
        for (int i=0;i<20;i++){
            Voitures[i].course();
        }

        if (!Voiture1.Getdestroyed())
            affichage(Voiture1);
        if (!Voiture2.Getdestroyed())
            affichage(Voiture2);

    }
    return 0;
}