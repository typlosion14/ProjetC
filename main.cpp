#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include "random.cpp"

; using namespace std;

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
    int sec = 1;
};

class Moteur
{
public:
    float Gettemperature() {
        return temperature;
    };
    void Settemperature(float a) {
        temperature = a;
    };
    float Gethuile() {
        return huile;
    };
    void Sethuile(float a) {
        huile = a;
    };
    void Refill() {
        huile = 100;
    };
    int Gettime() {
        return time;
    };
    void repair() {
        temperature -= 30;
    };
private:
    float temperature = 70;
    float huile = 60;
    int time = 10;
};


class Reservoir
{
public:
    float Getessence() {
        return essence;
    };
    void Setessence(float a) {
        essence = a;
    };
    void Refill() {
        essence = 100;
    };
    int Gettime() {
        return time;
    };
private:
    float essence = 95;
    int time = 10;
};


class Pneu
{
public:
    float Getpression() {
        return pression;
    };
    void Setpression(float a) {
        pression = a;
    };
    float Getusure() {
        return usure;
    };
    void Setusure(float a) {
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
    float pression = 80;
    float usure = 0;
    int time = 10;
};


class BoiteDeVitesse
{
public:
    void Setusure(float a) {
        usure = a;
    };
    float Getusure() {
        return usure;
    };
    void Change() {
        usure = 0;
    };
    int Gettime() {
        return time;
    };
private:
    float usure = 0;
    int time = 10;
};


class Batterie
{
public:
    float Getcharge() {
        return charge;
    };
    void Setcharge(float a) {
        charge = a;
    };
    void Change() {
        charge = 100;
    };
    int Gettime() {
        return time;
    };
private:
    float charge = 100;
    int time = 10;
};


class Suspension
{
public:
    float Getusure() {
        return usure;
    };
    void Setusure(float a) {
        usure = a;
    };
    void Change() {
        usure = 0;
    };
    float Gettime() {
        return time;
    };
private:
    float usure = 0;
    int time = 10;
};


class Aileron
{
public:
    float Getusure() {
        return usure;
    };
    void Setusure(float a) {
        usure = a;
    };
    void Change() {
        usure = 0;
    };
    int Gettime() {
        return time;
    };
private:
    float usure = 0;
    int time = 10;
};


class Turbo
{
public:
    float Getusure() {
        return usure;
    };
    void Setusure(float a) {
        usure = a;
    };
    void Change() {
        usure = 0;
    };
    int Gettime() {
        return time;
    };
private:
    float usure = 0;
    int time = 10;
};


class Circuit
{
    public:
        int Getsize() {
            return size;
        };
        void SetTurn(int a) {
            turn = a;
        };
        int GetTurn() {
            return turn;
        };
        void SetVirageG(int a) {
            virageG = a;

        };
        int GetVirageG() {
            return virageG;
        };
        void SetVirageD(int a) {
            virageD = a;
        };
        int GetVirageD() {
            return virageD;
        };
        void Setdistance(int a) {
            distance_parcourue = a;
        };

        int Getdistance () {
            return distance_parcourue;
        };

        private:
        int virageG = 0;
        int virageD = 0;
        int size = 5371;
        int turn = 0;
        int distance_parcourue = 0;
        

        
};


class Car
{
public:
    Time time;
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
    Circuit circuit;

    void Setname(string a) {
        name = a;
    }

    string Getname() {
        return name;
    }

    void Change_pneu() {
        pneu_avant_gauche.Change();
        pneu_avant_droit.Change();
        pneu_arriere_gauche.Change();
        pneu_arriere_droit.Change();
    };
    inline bool Setrepair(bool comme_neuve) {
        comme_neuve =true;
        return comme_neuve;
    }
    void Setdestroyed(bool a) {
        destroyed = a;
       
    }
    bool Getdestroyed() {
        return destroyed;
    }

    void turn_left(){
        //pression des pneux qui diminue à chaque tour
        circuit.SetVirageG(circuit.GetVirageG()+1);
        pneu_arriere_droit.Setpression(pneu_arriere_droit.Getpression()-(random(0,1))/5);
        pneu_arriere_gauche.Setpression(pneu_arriere_gauche.Getpression()-(random(0,1))/8);
        pneu_avant_droit.Setpression(pneu_avant_droit.Getpression()-(random(0,1))/5);
        pneu_avant_gauche.Setpression(pneu_avant_gauche.Getpression()-(random(0,1))/8);
        circuit.Setdistance(circuit.Getdistance()+595);

        //usuredes pneux qui augmente à chaque tour

        pneu_arriere_droit.Setusure(pneu_arriere_droit.Getusure()+(random(0,1))/5);
        pneu_arriere_gauche.Setusure(pneu_arriere_gauche.Getusure()+(random(0,1))/8);
        pneu_avant_droit.Setusure(pneu_arriere_droit.Getusure()+(random(0,1))/5);
        pneu_avant_gauche.Setusure(pneu_arriere_gauche.Getusure()+(random(0,1))/5);
        
        if (circuit.GetTurn() <4 ) {
            moteur.Settemperature(moteur.Gettemperature()+(4*circuit.GetTurn()));
        }
        if (circuit.GetTurn() > 4) {
            moteur.Settemperature(moteur.Gettemperature()+1.5);
        }

        //quantité d'huile
       
        moteur.Sethuile(moteur.Gethuile()-(random(0,1)/4));
        
        reservoir.Setessence(reservoir.Getessence()-(random(0,1)/2));

        boitedevitesse.Setusure(boitedevitesse.Getusure()+(random(0,1)/4));

        //batterie
        batterie.Setcharge(batterie.Getcharge()-(random(0,1)/5));
        //suspension
        suspension.Setusure(suspension.Getusure()+(random(0,1)/5));
        //aileron
        aileron.Setusure(aileron.Getusure()+(random(0,1)/7));
        //turbo
        turbo.Setusure(turbo.Getusure()+(random(0,1)/4));
    };
        
    void turn_right() {

        circuit.SetVirageD(circuit.GetVirageD()+1);
        circuit.Setdistance(circuit.Getdistance()+599);

        pneu_arriere_droit.Setpression(pneu_arriere_droit.Getpression()-(random(0,1))/8);
        pneu_arriere_gauche.Setpression(pneu_arriere_gauche.Getpression()-(random(0,1))/5);
        pneu_avant_droit.Setpression(pneu_avant_droit.Getpression()-(random(0,1))/8);
        pneu_avant_gauche.Setpression(pneu_avant_gauche.Getpression()-(random(0,1))/5);
        

        pneu_arriere_droit.Setusure(pneu_arriere_droit.Getusure()+(random(0,1))/8);
        pneu_arriere_gauche.Setusure(pneu_arriere_gauche.Getusure()+(random(0,1))/5);
        pneu_avant_droit.Setusure(pneu_avant_droit.Getusure()+(random(0,1))/8);
        pneu_avant_gauche.Setusure(pneu_avant_gauche.Getusure()+(random(0,1))/5);

        //temperature moteur
        if (circuit.GetTurn() < 4) {
            moteur.Settemperature(moteur.Gettemperature()+(4*circuit.GetTurn()));
        }
        if (circuit.GetTurn() > 4) {
            moteur.Settemperature(moteur.Gettemperature()+1.5);
        }
        //huile

        moteur.Sethuile(moteur.Gethuile()-(random(0,1)/2));
        //essence
        reservoir.Setessence(reservoir.Getessence()-(random(0,1)/2));
        //boite vitesse
        boitedevitesse.Setusure(boitedevitesse.Getusure()+(random(0,1)/10));
        //batterie
        batterie.Setcharge(batterie.Getcharge()-(random(0,1)/5));
        //suspension
        suspension.Setusure(suspension.Getusure()+(random(0,1)/5));
        //aileron
        aileron.Setusure(aileron.Getusure()+(random(0,1)/7));
        //turbo
        turbo.Setusure(turbo.Getusure()+(random(0,1)/4));

    }
    void course(){
            circuit.Setdistance(0);
            circuit.SetVirageG(0);
            circuit.SetVirageD(0);

            while(circuit.Getdistance() != circuit.Getsize()){

                while(circuit.GetVirageG()<5){

                    turn_left();
                }

                while(circuit.GetVirageD()<4){

                    turn_right();
                }
        
            circuit.SetTurn(circuit.GetTurn()+1);
        
                
            }
    }
    private:
        string name = "Vroum Vroum";
        bool comme_neuve = false;
        bool destroyed =false;

};
void affichage(Car car) {
    int r = 0;
    while (r != 9) {
        printf("Voiture: ");
        cout << car.Getname() << endl;
        printf("Temps pass%c:", 130);
        cout << car.time.Gettime() << endl;
        printf("L'huile du moteur est \x85 %f%% \n", car.moteur.Gethuile());
        printf("Le moteur est \x85 %f C \n", car.moteur.Gettemperature());//max 900
        printf("Le pneu avant gauche est \x85 %f%% d'usure.\n", car.pneu_avant_gauche.Getusure());
        printf("Le pneu avant droit est \x85 %f%% d'usure.\n", car.pneu_avant_droit.Getusure());
        printf("Le pneu arri%cre gauche est \x85 %f%% d'usure. \n", 138, car.pneu_arriere_gauche.Getusure());
        printf("Le pneu arri%cre droit est \x85 %f%% d'usure. \n", 138, car.pneu_arriere_droit.Getusure());
        printf("La pression du pneu avant gauche est \x85 %f%% de pression.\n", car.pneu_avant_gauche.Getpression());//Pression
        printf("La pression du pneu avant droit est \x85 %f%% de pression.\n", car.pneu_avant_droit.Getpression());
        printf("La pression du pneu arri%cre droit est \x85 %f%% de pression.\n", 138, car.pneu_arriere_droit.Getpression());
        printf("La pression du pneu arri%cre gauche est \x85 %f%% de pression.\n", 138, car.pneu_arriere_gauche.Getpression());
        printf("Le reservoir est \x85 %f%%. \n", car.reservoir.Getessence());
        printf("Le turbo est \x85 %f%% d'usure. \n", car.turbo.Getusure());
        printf("L'aileron est \x85 %f%% d'usure. \n", car.aileron.Getusure());
        printf("La suspension est \x85 %f%% d'usure. \n", car.suspension.Getusure());
        printf("La batterie est \x85 %f%% de charge. \n", car.batterie.Getcharge());
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
            car.time.Updatetime(car.moteur.Gettime());
            break;
        case 2:car.moteur.Settemperature(car.moteur.Gettemperature() - 10);
            car.time.Updatetime(car.moteur.Gettime());
            break;
        case 3:car.Change_pneu();
            car.time.Updatetime(car.pneu_arriere_droit.Gettime());
            break;
        case 4:car.reservoir.Refill();
            car.time.Updatetime(car.reservoir.Gettime());
            break;
        case 5:car.turbo.Change();
            car.time.Updatetime(car.turbo.Gettime());
            break;
        case 6:car.aileron.Change();
            car.time.Updatetime(car.aileron.Gettime());
            break;
        case 7:car.suspension.Change();
            car.time.Updatetime(car.suspension.Gettime());
            break;
        case 8:car.batterie.Change();
            car.time.Updatetime(car.batterie.Gettime());
            break;
        }
    }
};