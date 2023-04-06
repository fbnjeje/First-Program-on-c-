/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int numero, *dirNum;

  cout << "digite un nuner: " << endl;
  cin >> numero;

  dirNum = &numero;

  if (*dirNum % 2 == 0)
    {
      cout << "El numero es: " << *dirNum << " Es par" << endl;
      cout<<"La direccion es: "<<dirNum<<endl;
    }
  else if (*dirNum % 2 == 1)
    {
      cout << "el numero es: " << *dirNum << " No es par" << endl;
      cout<<"La direccion es: "<<dirNum<<endl;
    }

  return 0;
}
