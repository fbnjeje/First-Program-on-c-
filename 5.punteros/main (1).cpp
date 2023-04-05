/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int numeros[100],a,aux =0;
    int *p;
    

    
    cout<<"Ingrese cantidad de numeros q desea organizar: "<<endl;
    cin>>a;
    for(int i = 0;i<a;i++){
        cout<<"Ingrese numero en la posicion "<<"["<<i<<']'<<endl;
        cin>>numeros[i];
    }
    p = numeros;
    
    for(int i = 0;i<a;i++){
        if(aux < *p){
            
            aux = *p;
        }
        
        *p++;
        
    }
    cout<<"El numero mayor en el arreglo es: "<<aux;
    
}
