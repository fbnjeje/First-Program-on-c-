
#include <iostream>
using namespace std;

int
main ()
{
  int numero,DineroIn,DineroOut,i;


  int saldoInicial = 1000;
  
  
while(i== 0){
	int opc = 0;
  	cout << "\tbienvenido al cajero automatico" << endl;
  	cout << "1. ingresar dinero en la cuenta" << endl;
  	cout << "2. Retirar dinero de la cuenta" << endl;
  	cout << "3.Salir" <<endl;
  	cout << "4.Ver saldo"<<endl;
  	cin >> opc;
  	
	switch (opc)
    {
    case 1:
	    cout << "Que cuanto dinero desea ingresar" << endl;
	    cin >> DineroIn;
	    saldoInicial += DineroIn;
	
	    cout << "Saldo actual: "<<saldoInicial<<endl;
	    break;
      
    case 2:
	    cout<<"Cuanto dinero desea retirar "<<endl;
		cin>>DineroOut;
		saldoInicial -= DineroOut;
    	cout<< "Saldo actual: " <<saldoInicial<<endl;
    break;
    
    case 3:
    	cout<<"Gracias :D"<<endl;
    	break;
    
    case 4:
    	cout<<saldoInicial<<endl;
    }
    
    if(opc!=3){
    	cout<<"\tDesea continuar??"<<endl;
    	cout<<"1.Salir"<<endl;
    	cout<<"0.Continuar"<<endl;
		cin>>i;
	}else{
		i =1;
	}
    
    
}
  



  return 0;
}

