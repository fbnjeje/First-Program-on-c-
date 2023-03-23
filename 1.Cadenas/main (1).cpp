/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char cadena[]= "Fabio";
    char palabra2[] = {'A','B','C','D','E','G'};
    
    char nombre[30];
    cout<<"digite su nombre ";
    
    cin.getline(nombre,20,'\n');
    
    cout<<nombre;


    getch();
    return 0;
}
