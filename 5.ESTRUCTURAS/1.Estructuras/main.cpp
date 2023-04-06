/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    struct CD{
        char titulo[30];
        char artista[30];
        int numCanciones;
        float precio;
        char fechaCompra;
    }CD1,CD2,CD3;
    
    
    
    
    CD3.precio = 12000;
    cout<<CD3.precio;
    return 0;
}
