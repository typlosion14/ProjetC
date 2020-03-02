#include <stdio.h>
#include <iostream>



class Moteur
{
        
    public:  
       int Gettemperature(){
           return temperature;
       }
       void Settemperature(int a){
           temperature = a;
       }
       int Getniveau_huile(){
           return niveau_huile;
       }
       void Setniveau_huile(int a){
           niveau_huile = a;
       }
    private:
        int temperature = 100;
        int niveau_huile = 60;

};

class Reservoir
{
    public:
        int Getniveau_essence(){
            return niveau_essence;
        };
        void Setniveau_essence(int a){
            niveau_essence = a;
        };
    private:
        int niveau_essence = 80;
};
 

class Pneu
{
    public:
        int Getpression(){
           return pression;
        }

        void Setpression(int a){
           pression = a;
        }

        int Getusure(){
            return usure;
        }

        void Setusure(int a){
        usure = a;
        }
    private:
         int pression = 80;
         int usure = 0;
         
        
};

class BoiteDeVitesse
{
    public:
        void Setusure(int a){
            usure = a;
        };
        int Getusure(){
            return usure;
        }
    private:
        int usure = 0;
};


class Baterie
{
    public:
        int Getcharge(){
            return charge;
        }
        void Setcharge(int a){
            charge = a;
        }
    private:
        int charge = 0;
};

class Suspension
{
    public:
        int Getusure(){
            return usure;
        }
        void Setusure(int a){
            usure = a;
        }
    private:
         int usure = 0;

};
class Aileron
{
    public:
        int Getusure(){
            return usure;
        };
        void Setusure(int a){
            usure = a;
        };
    private:
        int usure = 0;
};

class Turbo
{
    public:
        int Getusure(){
            return usure;
        }
        void Setusure(int a){
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
    

};


int main() {
    
    Car car;
    Car car2;

    std::cout << car.pneu_arriere_droit.Getusure() << std::endl;
    car.pneu_arriere_droit.Setusure(20);
    std::cout << car.pneu_arriere_droit.Getusure() << std::endl;


    return 0;
}
