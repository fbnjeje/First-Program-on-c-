/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    queue<int> q;
    int resp[5];
    
    
    
    for(int i = 0;i<5;i++){
        cout<<"Ingrese 5 numeros para ser sumados: ";
        cin>> resp[i];
        
        int valor = resp[i];
        q.push(valor);
    }
    
    
    int indx;
    
    while(!q.empty()){
        for(int i = 0;i<5;i++){
            int valor = q.front();
            indx += valor;
            cout<<valor<<" ";
            
            q.pop();
        }
        cout<<endl;
    }
    cout<<"resp: "<<indx;
}
