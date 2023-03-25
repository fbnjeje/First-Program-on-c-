/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    struct datos{
        string nombre;
        char inicial;
        int edad;
        float nota;
    }persona,persona2;
    
    persona.nombre = "Pedro";
    persona.inicial = 'P';
    persona.edad = 20;
    persona.nota = 4.6;
    
    cout<<"su nombre es: "<<persona.nombre<<endl;
    cout<<"su inicial es: "<<persona.inicial<<endl;
    cout<<"su edad es: "<<persona.edad<<endl;
    cout<<"su nota es de: "<<persona.nota<<endl;
    
    cout<<"----------------"<<endl;
    
    persona2.nombre = "Hector";
    persona2.inicial = 'H';
    persona2.edad = 25;
    persona2.nota = 9.2;
    
    cout<<"su nombre es: "<<persona2.nombre<<endl;
    cout<<"su inicial es: "<<persona2.inicial<<endl;
    cout<<"su edad es: "<<persona2.edad<<endl;
    cout<<"su nota es de: "<<persona2.nota<<endl;
}
