#include <stdio.h>
#include <iostream>
#include "main.cpp"
#include <string>
using namespace std;
Time time;
Car car;
int main() {
    int r = 0;
    while (r != 9) {
        printf("Temps pass%c:", 130);
        cout << time.Gettime() << endl;
        printf("L'huile du moteur est \x85 %d%c \n", car.moteur.Gethuile(), 37);
        printf("Le moteur est \x85 %d%cC \n", car.moteur.Gettemperature(), 248);//max 900
        printf("Le pneu avant gauche est \x85 %d%c d'usure.\n", car.pneu_avant_gauche.Getusure(), 37);
        printf("Le pneu avant droit est \x85 %d%c d'usure.\n", car.pneu_avant_droit.Getusure(), 37);
        printf("Le pneu arri%cre gauche est \x85 %d%c d'usure. \n", 138, car.pneu_arriere_gauche.Getusure(), 37);
        printf("Le pneu arri%cre droit est \x85 %d%c d'usure. \n", 138, car.pneu_arriere_droit.Getusure(), 37);
        printf("La pression du pneu avant gauche est \x85 %d%c de pression.\n", car.pneu_avant_gauche.Getpression(), 37);//Pression
        printf("La pression du pneu avant droit est \x85 %d%c de pression.\n", car.pneu_avant_droit.Getpression(), 37);
        printf("La pression du pneu arri%cre droit est \x85 %d%c de pression.\n", 138, car.pneu_arriere_droit.Getpression(), 37);
        printf("La pression du pneu arri%cre gauche est \x85 %d%c de pression.\n", 138, car.pneu_arriere_gauche.Getpression(), 37);
        printf("Le reservoir est \x85 %d%c. \n", car.reservoir.Getessence(), 37);
        printf("Le turbo est \x85 %d%c d'usure. \n", car.turbo.Getusure(), 37);
        printf("L'aileron est \x85 %d%c d'usure. \n", car.aileron.Getusure(), 37);
        printf("La suspension est \x85 %d%c d'usure. \n", car.suspension.Getusure(), 37);
        printf("La batterie est \x85 %d%c de charge. \n", car.batterie.Getcharge(), 37);
        printf("1. Remplir l'huile du moteur.\n");
        printf("2. Refroidir le moteur.\n");
        printf("3. Changer les pneus.\n");
        printf("4. Remplir le reservoir.\n");
        printf("5. R%cparer le turbo.\n", 130);
        printf("6. R%cparer l'aileron.\n", 130);
        printf("7. R%cparer la suspension.\n", 130);
        printf("8. Recharger la batterie.\n");
        printf("9. Repartir.\n");
        if (!(cin >> r)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            r = 0;
        }
        switch (r) {
        case 1:car.moteur.Refill();
            time.Updatetime(car.moteur.Gettime());
            break;
        case 2:car.moteur.Settemperature(car.moteur.Gettemperature()-10);
            time.Updatetime(car.moteur.Gettime());
            break;
        case 3:car.Change_pneu();
            time.Updatetime(car.pneu_arriere_droit.Gettime());
            break;
        case 4:car.reservoir.Refill();
            time.Updatetime(car.reservoir.Gettime());
            break;
        case 5:car.turbo.Change();
            time.Updatetime(car.turbo.Gettime());
            break;
        case 6:car.aileron.Change();
            time.Updatetime(car.aileron.Gettime());
            break;
        case 7:car.suspension.Change();
            time.Updatetime(car.suspension.Gettime());
            break;
        case 8:car.batterie.Change();
            time.Updatetime(car.batterie.Gettime());
            break;
        }
    };


    return 0;
}
