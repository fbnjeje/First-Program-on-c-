/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    
    int numeros[10];
    int *p;
    
    for( int i = 0;i<10;i++){
        cout<<"Ingrese un numero en la posicion "<<"["<<i<<"] : ";
        cin>>numeros[i];
    }
    
    p = numeros;
    
    for( int i = 0;i<10;i++){
        if(*p % 2 == 0){
            cout<<"El numero "<<*p<<" es par"<<endl;
            cout<<"posicion "<<p<<endl;
        }
        p++;
    }
    
    cout<<*p;
    return 0;
}
