/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int numeros[100],n,mayor = 0;
    
    
    cout<<"Digite el numero de elementos del arreglo: ";
    cin>>n;
    
    for(int i= 1;i<n;i++){
         cout<<1<<"Digite un numero: ";
         cin>>numeros[i];
         
         
         if(numeros[i]>mayor){
             mayor = numeros[i];
         }
    }
    cout<<"El numero mayor es: "<<mayor<<endl;
}
