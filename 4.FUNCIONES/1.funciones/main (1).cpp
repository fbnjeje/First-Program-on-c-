/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int suma(int numero1,int numero2)
    {
        
         return numero1+numero2;
        
    }
    

int main()
{
    int a,b,numero1,numero2;
    
    cout<<"ingrese un numero: "<<endl;
    cin>>numero1;
    
    cout<<"ingrese otro numero: "<<endl;
    cin>>numero2;
    
    cout<<"su suma es de: "<<suma(numero1,numero2);
    return 0;
}
