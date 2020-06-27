#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

//Función que calcula la media de as estaturas
float cod(float c[], float media){
float suma=0;
int i;
for (int i = 0; i < 25; i++)//Ciclo for para sumar todas las alturas
{
  suma = suma + c[i]; 
}
    media = suma/25;//Se obtiene la media de las alturas dividiendo entre e total de estas

    cout <<endl<<"La media de las alturas de los 25 alumnos es: "<<media<<" m";//Se muestra el promedio
    return media;
}

//Función que dice cuantos alumnos estan sobre la media
int med(float x[], float prom){
    
    int mayor=0, menor=0,i=0;

    for (int i = 0; i < 25; i++)
    {
        if (x[i]<prom){ 
         menor++;
        }
        if(x[i]>prom){ 
          mayor++;
        }    
    }
    cout <<endl<<"----Dentro de las alturas ingresadas "<<menor<<" estan bajo la media.";
    cout <<endl<<"----Y "<<mayor<<" estan sobre la media";
}

int main(){
    float x[25];
    float prom;
    cout <<endl<<"PROMEDIAR ALTURA DE ALUMNOS";
    cout <<endl<<"Ingrese las alturas de los 25 estudiantes: "<<endl;

    for (int i = 0; i < 25; i++)//Se llena el arreglo con las alturas
    {
      cin >>x[i];
    }
    
    prom= cod(x, prom);//Se llaman ambas funciones
    med(x,prom);

    return 0;
}



