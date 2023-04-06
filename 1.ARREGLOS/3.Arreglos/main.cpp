/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int numeros[] = {1,2,3,4,5};
    for(int i = 0;i<5;i++){
        cout<<numeros[i]<<" ";
    }
    cout<<""<<endl;
    
    for(int i = 0; i<5;i++){
        cout<<numeros[i-1]<<" ";
    }
    
}
