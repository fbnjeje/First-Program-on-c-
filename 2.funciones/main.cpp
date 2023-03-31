/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int
tablaMultiplicar (int tablita)
{
  for (int i = 1; i <= 10; i++)
    {
      cout << tablita << " X " << i << " = " << tablita * i << endl;
    }
};

main ()
{
  int tabla;
  cout << "ingrese el numero q desea la tabla: " << endl;
  cin >> tabla;

  tablaMultiplicar (tabla);

}
