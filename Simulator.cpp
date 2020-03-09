#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "test.cpp"
#include "Random.cpp"
using namespace std;




int main()
{
    srand (time(NULL)); //TRES IMPORTANT POUR LE RANDOM !!!!!!!!
    Time time;
    Circuit circuit;
    Car car;

    int tour=0;
    int distance_parcourue =0;
    float pression_pneu_arriere_droit = 0;
    float pression_pneu_arriere_gauche = 0;
    float pression_pneu_avant_droit = 0;
    float pression_pneu_avant_gauche = 0;

    float usure_pneu_arriere_droit = 0;
    float usure_pneu_arriere_gauche = 0;
    float usure_pneu_avant_droit = 0;
    float usure_pneu_avant_gauche = 0;
    
    for(int turn = 0; circuit.GetTurn()<50; turn ++){ //boucle les tours
        distance_parcourue=0;
        circuit.SetVirageG(0);
        circuit.SetVirageD(0);
        while(distance_parcourue<circuit.Getsize()) // tant que les 5371m ne sont pas parcoures
        {
            

            for(int nb_virage=0;circuit.GetVirageG()<4;nb_virage++){
                circuit.SetVirageG(nb_virage);
                circuit.Setdistance(595); //  Distance entre chaque virage gauche
                
                distance_parcourue +=circuit.Getdistance();
                
                car.pneu_arriere_droit.Setpression(random(0,1));
                car.pneu_arriere_gauche.Setpression(random(0,1));
                car.pneu_avant_droit.Setpression(random(0,1));
                car.pneu_avant_gauche.Setpression(random(0,1));

                pression_pneu_arriere_droit += car.pneu_arriere_droit.Getpression()/13;
                pression_pneu_arriere_gauche += car.pneu_arriere_gauche.Getpression()/15;
                pression_pneu_avant_droit += car.pneu_avant_droit.Getpression()/13;
                pression_pneu_avant_gauche += car.pneu_avant_gauche.Getpression()/15;

                car.pneu_arriere_droit.Setusure(random(0,1));
                car.pneu_arriere_gauche.Setusure(random(0,1));
                car.pneu_avant_droit.Setusure(random(0,1));
                car.pneu_avant_gauche.Setusure(random(0,1));
                
                usure_pneu_arriere_droit +=car.pneu_arriere_droit.Getusure()/15;
                usure_pneu_arriere_gauche +=car.pneu_arriere_gauche.Getusure()/13;
                usure_pneu_avant_droit +=car.pneu_avant_droit.Getusure()/15;
                usure_pneu_avant_gauche += car.pneu_avant_gauche.Getusure()/13;

                
                
                
                
            }
            

            for(int nb_virage=0;circuit.GetVirageD()<3;nb_virage++){
                circuit.SetVirageD(nb_virage);
                circuit.Setdistance(599); //  Distance entre chaque virage droit
                distance_parcourue +=circuit.Getdistance();
                
                car.pneu_arriere_droit.Setpression(random(0,1));
                car.pneu_arriere_gauche.Setpression(random(0,1));
                car.pneu_avant_droit.Setpression(random(0,1));
                car.pneu_avant_gauche.Setpression(random(0,1));

                pression_pneu_arriere_droit += car.pneu_arriere_droit.Getpression()/13;
                pression_pneu_arriere_gauche += car.pneu_arriere_gauche.Getpression()/15;
                pression_pneu_avant_droit += car.pneu_avant_droit.Getpression()/13;
                pression_pneu_avant_gauche += car.pneu_avant_gauche.Getpression()/15;

                car.pneu_arriere_droit.Setusure(random(0,1));
                car.pneu_arriere_gauche.Setusure(random(0,1));
                car.pneu_avant_droit.Setusure(random(0,1));
                car.pneu_avant_gauche.Setusure(random(0,1));
                
                usure_pneu_arriere_droit +=car.pneu_arriere_droit.Getusure()/13;
                usure_pneu_arriere_gauche +=car.pneu_arriere_gauche.Getusure()/15;
                usure_pneu_avant_droit +=car.pneu_avant_droit.Getusure()/13;
                usure_pneu_avant_gauche += car.pneu_avant_gauche.Getusure()/15;

                

            }
            

            
        };
        //circuit.Setdistance(0);
        //distance_parcourue= circuit.Getdistance();
       


        if(car.Setrepair(true)==true) {
            car.pneu_avant_gauche.Change();
            car.pneu_avant_droit.Change();
            car.pneu_arriere_gauche.Change();
            car.pneu_arriere_droit.Change();
        }
        tour+=1;
        circuit.SetTurn(tour);
        


    }
    cout<<pression_pneu_arriere_droit<<endl;
    cout<<pression_pneu_arriere_gauche<<endl;
    cout<<pression_pneu_avant_gauche<<endl;
    cout<<pression_pneu_avant_droit<<endl;
    return 0;
}