#include <iostream>
using namespace std;

//Programa que me diga si un año es bisiesto o no lo es

//Función en la que se desarrollan las pruebas 
void bisiesto_pru1 (){
    int year;

    cout <<endl<<"Ingrese el a"<<char(164)<<"o para saber si este es bisiesto"<<endl;
    cin  >>year;


    if (year%4==0 && year%100!=0 || year%400==0){ //Año debe ser divisible entre 4 y no entre 100. O también disivisible entre 400
        cout <<"El a"<<char(164)<<"o es bisiesto."<<endl;

    }else{ //Si el año no cumple las condiciones anteriores 
       cout <<"El a"<<char(164)<<"o no es bisiesto."<<endl;   
     }
    } 

//MAIN
int main (){

    cout <<endl<< "Bienvenido al sistema de a"<<char(164)<<"os."<<endl;
    bisiesto_pru1 ();//Función incluida
    cout <<"Gracias por usar nuestro sistema. Feliz dia."<<endl<<endl;

}