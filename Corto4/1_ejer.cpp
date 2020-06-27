#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

//Función que codificará
string cod(){
char frase[50];//Arreglo donde irá la frase.
gets(frase);//Se ingresará la frase incluyendo espacios y todo
int largo = strlen(frase);//Longitud que tendrá el arreglo y así hacer el for

 for (int i = 0; i < largo ; i++)//Ciclo para codificar si las letras coinciden
{
if (frase[i] == 'm')
    frase[i]='0';

else if (frase[i] == 'u')
    frase[i]='1';

else if (frase[i] =='r')
    frase[i]='2';

else if (frase[i] =='c')
    frase[i]='3';

 else if (frase[i] =='i')
    frase[i]='4';

else if (frase[i] == 'e')
    frase[i]='5';

else if (frase[i] =='l')
    frase[i]='6';

else if (frase[i] == 'a')
    frase[i]='7';

else if (frase[i] == 'g')
    frase[i]='8';

else if (frase[i] == 'o')
    frase[i]='9';
 }

    cout <<"La frase ya codificada es: "<<endl;
    cout <<frase; //Se imprime la frase ya codificada 
}


int main() { 

cout <<endl<<"CODIFICAR UNA FRASE EN CLAVE MURCIELAGO"<<endl;
cout <<"Ingrese una frase: "<<endl;

//Se llama a la función que codifica la frase 
 cod();

return 0;
}
