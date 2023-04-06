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
  struct Estudiantes{
      int cedula;
      string nombre;
      string apellido;
      int edad;
      string profesion;
      string lugarNacimiento;
      string direccion;
      int telefono;
  }estudiante1;
  
  cout<<"ingrese su cedula: "<<endl;
  cin>>estudiante1.cedula;
  
  cout<<"ingrese su nombre: "<<endl;
  cin>>estudiante1.nombre;
  
  cout<<"ingrese su apellido: "<<endl;
  cin>>estudiante1.apellido;
  
  cout<<"ubgrese su edad: "<<endl;
  cin>>estudiante1.edad;
  
  cout<<"ingrese su profesion: "<<endl;
  cin>>estudiante1.profesion;
  
  cout<<"Ingrese su lugar de nacimiento: "<<endl;
  cin>>estudiante1.lugarNacimiento;
  
  cout<<"ingrese su direecion: "<<endl;
  cin>>estudiante1.direccion;
  
  cout<<"ingrese su telefono: "<<endl;
  cin>>estudiante1.telefono;
  
  cout<<"DATOS"<<endl;
  cout<<estudiante1.cedula<<endl;
  cout<<estudiante1.nombre<<endl;
  cout<<estudiante1.apellido<<endl;
  cout<<estudiante1.edad<<endl;
  cout<<estudiante1.profesion<<endl;
  cout<<estudiante1.lugarNacimiento<<endl;
  cout<<estudiante1.direccion<<endl;
  cout<<estudiante1.telefono<<endl;
  
  
  

  return 0;
}
