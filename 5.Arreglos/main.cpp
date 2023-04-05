/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    
    int v[5] = {2,12,34,12,100};
    
    int aux = 0 ;
    
    for ( int i = 0; i<5;i++){
        if(v[i]>aux){
            aux = v[i];
            
        }
        
    }
    cout<<aux;
    return 0;
}
