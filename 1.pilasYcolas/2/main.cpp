/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> miCola;
    
    if(miCola.empty()){
        cout<<"La cola esta vacia"<<endl;
        
    }else{
        cout<<"La cola esta llena EJEJE"<<endl;
    }
    
    
    miCola.push(1);
    miCola.push(2);
    miCola.push(3);
    
    cout<< "El primer numero de la cola es: "<<miCola.front()<<endl; 
    
    /*
    if(miCola.empty()){
        cout<<"La cola esta vacia"<<endl;
        
    }else{
        cout<<"La cola esta llena EJEJE"<<endl;
    }
    */
    
    cout<<"El tamaño de la cola es: "<<miCola.size();
}
