#include <iostream>

using namespace std;

int main(){
	
	int opc,numeroTbl;
	
	cout<<"\tCon que bucle quiere hacer la tabla"<<endl;
	cout<<"1.For"<<endl;
	cout<<"2.While"<<endl;
	cout<<"3.do-While"<<endl;
	
	cin>>opc;
	
	cout<<"Ingrese el numero de la tabla"<<endl;
	cin>>numeroTbl;
	
	switch(opc){
		case 1:
			
			for(int i = 1;i<=10;i++){
				cout<<numeroTbl<<" X "<<i<<" = "<<numeroTbl * i<<endl;
			}
			cout<<
				"for(int i = 1;i<=10;i++){
				"cout<<numeroTbl<<' X '<<i<<' = '<<numeroTbl * i<<endl;"
			"}"
			
					
			break;
		case 2:
			break;
		case 3:
			break;
	}
	
}
