#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "main.cpp"


using namespace std;


    
int main() {
    srand(time(NULL));
    string r;
    //Initialisation Voiture 1
    Car Voiture1;
    cout << "Choissisez un nom pour la Voiture 1: " << endl;
    cin >> r;
    Voiture1.Setname("1:" + r);
    //Initialisation Voiture 2
    Car Voiture2;
    cout << "Choissisez un nom pour la Voiture 2: " << endl;
    cin >> r;
    Voiture2.Setname("2:" + r);
    while(Voiture1.circuit.GetTurn() < 50){
        Voiture1.course();
        Voiture2.course();

        affichage(Voiture1);
        affichage(Voiture2);
    };
    return 0;
}