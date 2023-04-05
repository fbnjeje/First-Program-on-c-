/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


main ()
{
  int a = 5,b=10,c = 15;
  
  int *p;
  
  p = &a;
  
  cout<<"posision de a: "<<p<<endl;
  cout<<"contenido de a: "<<*p<<endl;
  
  p = &b;
  
  cout<<"posision de B: "<<p<<endl;
  cout<<"contenido de b: "<<*p<<endl;
  
  p = &c;
  
  cout<<"posisicion de c es: "<<p<<endl;
  cout<<"contenido de c es: "<<*p<<endl;
  
  
  
}
