#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;


//Función para sacar los sueldos
float total() {
    struct Empleado //datos que le le pediran al usuario sobre el empleado
{   
    float Num_empleado, Num_horas, Num_exhoras, TotalS, RealS;
          }emp[100];//Espacios donde almacenar la información de los empleados

        
          int n;
          float hora= 1.75, horaex= 2.50, SS=0.04, AFP=0.0625, rent=0.1;
        

           cout <<endl<<"Ingrese el numero de empleados en total que ingresara: ";
            cin >>n; //Con esta variable se limitara el arreglo

    cout <<endl<<"Ingrese la siguiente informacin";
                for (int i = 0; i < n; i++)//Repite hasta tener todos los empleados que el usuario dio
                {
                    cout <<endl<<"Numero de empleado: ";
                    cin  >>emp[i]. Num_empleado;
                    cout <<endl<<"Numero de horas normales laboradas por el empleado: ";
                    cin  >>emp[i]. Num_horas;
                    cout <<endl<<"Numero de horas extras laborales por el empleado: ";
                    cin  >>emp[i]. Num_exhoras;

                    emp[i].TotalS = (emp[i]. Num_horas*hora)+(emp[i].Num_exhoras*horaex);
                    cout << emp[i].TotalS;

                    if (emp[i].TotalS<500)//Descuentos a realizar sin renta
                    {
                       emp[i].RealS = emp[i].TotalS - ((emp[i].TotalS*SS)+(emp[i].TotalS*AFP));
                    }
                    else//Descuentos con renta
                    {
                       emp[i].RealS = emp[i].TotalS- ((emp[i].TotalS*SS)+(emp[i].TotalS*AFP)+(emp[i].TotalS*rent));
                    }
                    //Se muestran los valores deseados en pantalla por cada empleado
                    cout <<endl<<emp[i]. Num_empleado<<"---Empleado   Sueldo Total: "<<emp[i].TotalS<<"   ---Sueldo Real: "<< emp[i].RealS;
                }
              return 0;  
        }  
//Menú principal donde usuario elige la ruta
int main (){

int opcion; 
    cout <<endl<<"Bienvenido al sistema de salarios. seleccione una opcion:"<<endl<<endl;
    cout <<"1-----------Ingresar registros de sueldos de empleados"<<endl;
    cout <<"2-----------Salir"<<endl;
    cin  >>opcion;

    if (opcion==1){
        total ();//Función
    }else{
       cout <<"Usted Ha salido del sistema de salarios";
    }
   
} 


 
   

    
  
 









