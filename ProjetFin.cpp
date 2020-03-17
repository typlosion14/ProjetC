#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "main.cpp"


using namespace std;


    
int main(){
    srand (time(NULL));
    
    Car Voiture1;
    Voiture1.Setname("Pussy destroyer");
    //Car Voiture2;
    //Voiture2.Setname("Panda slayer");
    //Voiture2.course();
    //affichage(Voiture2);    
   
    affichage(Voiture1);
    Voiture1.course();
    
    affichage(Voiture1);
    Voiture1.course();
    affichage(Voiture1);
    return 0;
}