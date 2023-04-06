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
  int numero[100][100];
  int c, f;
  cout << "ingrese numero de columnas ";
  cin >> c;
  cout << "ingrese numero de filas ";
  cin >> f;


  for (int i = 0; i < f; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  cout << "["<< i << "]" << "["<< j << "]" << " ingrese numero: ";
	  cin >> numero[i][j];
	}

    }
    cout<<"\tTabla"<<endl;
    for(int i = 0;i < f ; i++){
        for(int j = 0;j < c; j++ ){
            cout<<"["<<numero[i][j]<<"]";
        }
    
        cout<<"\t"<<endl;
    }
}
