/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdlib.h>

using namespace std;


//protipo de funcion
void intercambio(float *,float *);


int main()
{
    float num1 = 20.3, num2 = 6.74;
    
    cout<<"Primer numero "<<num1<<endl;
    cout<<"Segunbdo nunmero"<<num2<<endl;
    
    
    intercambio(&num1,&num2);
    
    cout<<"\n despues del valor de intercambio: \n";
    cout<<"el nuevo valor de num1: "<<num1<<endl;
    cout<<"el nuevo valor de num2: "<<num2<<endl;
    
    
    
    
    
    return 0;
}


void intercambio (float *dirN1, float * dirN2){
    float aux;
    
    aux = *dirN1;
    
    *dirN1 = *dirN2;
    *dirN2 = aux;
}









