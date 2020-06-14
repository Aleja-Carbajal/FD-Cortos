#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//Adivinar un número aleatorio del 1 al 100

//Función prepara el numero
void Alea_num(){
    srand (time(NULL));
}

int main(){
    Alea_num ();//Funcion
    
    int num, numpa_adiv=rand() % 100 + 1, chances=0, n;//Se define el rango de datos que se tomaran en numpa_adiv

        cout <<endl<<"Bienvenido al juego del numero magico. Tiene 5 intentos, trate de adivinar el numero correcto entre 1 y 100";
        cout <<endl<<"Para comenzar presione---------1";
        cout <<endl<<"Para salir presione------------0"<<endl;
        cin >>n;

        switch (n)
        
        {
            case 1:
                do //Bucle que se rompe hasta que se llegan a las 5 intentos o se adivina el numero
                { 
                    
                    if (chances<5 && num!=0)//Se repetira segun condiciones
                    { 
                        cout <<endl<<"Ingrese un numero: ";
                        cin  >>num;
                    
                            if (num!=numpa_adiv)
                            {
                                if (num>numpa_adiv)//Pistas dadas al usuario
                                {
                                    cout <<endl<<"El numero corecto es menor que el ingresado";
                                     ++chances;//Se suma 1 a la cantidad de intentos

                                }else if (num<numpa_adiv)//Pistas dadas al usuario
                                {
                                    cout <<endl<<"El numero correcto es mayor que el ingresado";
                                     ++chances;
                                }
                          }
                    }else if (chances=5 && num!=numpa_adiv)//Alcanzar el limite de intentos
                    { 
                        cout <<endl<<endl<<"Juego perdido. No mas intentos disponibles."<<endl;
                        cout <<"El numero correcto era: "<<numpa_adiv<<endl<<endl;
                        break;//rompe el bucle
                    } 
                    
                }              
                while (chances<6 && num!=numpa_adiv && num!=0 );//Condiciones del do
                {
                    if (num==numpa_adiv)//Colocar el numero correcto
                    {
                       cout <<endl<<"Felicidades encontraste el numero correcto!"<<endl<<endl<<endl;
                    }else if (num==0)//opción 0 permite al usuario salirse en cualquier momento
                    {
                        cout <<endl<<"Ha salido del juego."<<endl<<endl;
              
                    }
                }
            break;

            case 0://Si el usuario sale antes de comenzar a jugar

            cout <<endl<<"Ha salido del juego."<<endl<<endl;
            break;

            default://Si se ingresa un valor que no sean 1 o 0
                cout <<endl<<"Ingresar un valor valido"<<endl;
        }
     }
        
        
             
      

    
    
    
       
       
       
        



     
     
     




