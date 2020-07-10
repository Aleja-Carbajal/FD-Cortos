#include <iostream>
#include <string.h>

using namespace std;

const int longCad = 20;
typedef struct costoPorArticulo
{
    char nombreArticulo [longCad+1];
    int cantidad;
    float precio;
    float costoxArticulo;
}cpa;

void llenardatos(cpa pro[], int*);//Función para ingresar los datos de cada producto
void costoxproducto (cpa pro[], int*);//Función para calcular el costo total de cada producto
void mostrardatos (cpa pro[], int*);//Función para mostrar todos los datos de los productos y el total de c/u
void totalcompra (cpa pro[],int*, float*);//Función para calcular el total a pagar

int main (){

    int numA;//Número de artículos que ingresará el usuario en total 
    cpa pro [50];//Arreglo de la estructura
    float total;
    

    cout <<endl<<"BIENVENIDO A LA TIENDA ´2020´"<<endl;
    cout <<"Productos que ingresara en total: ";
    cin  >>numA;//Se ingresa el total de artículos
    cin.ignore(100, '\n');
   
   //Llamamos las funciones necesarias
    llenardatos (pro, &numA);
    costoxproducto (pro, &numA);
    mostrardatos (pro, &numA);
    totalcompra (pro, &numA, &total);

    cout <<endl<<"----------TOTAL A PAGAR--------------$"<<total;//Mostramos el valor que obtuvimos de la función "totalcompra"
    cout <<endl<<"------Gracias por su compra :D------"<<endl<<endl;

}

void llenardatos(cpa pro[], int*numA){

    for (int i = 0; i < *numA; i++)//El ciclo se limita al número total de articulos 
    {
      //Llenamos datos del producto  
      cout <<endl<<"Ingrese el nombre del producto "<<i+1<<": ";
      gets(pro[i].nombreArticulo);

      cout <<"Ingrese la cantidad comprada: ";
      cin  >>pro[i].cantidad;

      cout <<"Ingrese el precio por unidad del producto: $";
      cin  >>pro[i].precio;

      cin.ignore(100,'\n');
    }
}

void costoxproducto (cpa pro[], int*numA){

    for (int i = 0; i < *numA; i++)
    {
        //Obtenemos el total a pagar de cada productos y lo guardamos en el arreglo
        pro[i].costoxArticulo = pro[i].cantidad*pro[i].precio;
    }
}

void mostrardatos (cpa pro[], int*numA){

    cout <<endl<<"Articulos comprados";
    for (int i = 0; i < *numA; i++)//Ciclo para mostrar cada prodructo del arreglo
    {
        cout <<endl<<"Articulo "<<i+1;
        cout <<endl<<"----Nombre:----------------------/"<<pro[i].nombreArticulo;
        cout <<endl<<"----Cantidad comprada:-----------/"<<pro[i].cantidad;
        cout <<endl<<"----Precio por unidad:-----------$"<<pro[i].precio;
        cout <<endl<<"----Total a pagar por articulo:--$"<<pro[i].costoxArticulo;
    }
}

void totalcompra (cpa pro[], int*numA, float*total){

    for (int i = 0; i < *numA; i++)
    {
        *total = *total + pro[i].costoxArticulo;//Obtenemos el total de la compra sumando el costo taltal de cada producto
    }
    
}