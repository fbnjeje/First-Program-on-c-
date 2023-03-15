#include <iostream>

using namespace std;

int main(){
	
	int opc,numeroTbl,i;
	
	cout<<"\tCon que bucle quiere hacer la tabla"<<endl;
	cout<<"1.For"<<endl;
	cout<<"2.While"<<endl;
	cout<<"3.do-While"<<endl;
	
	cin>>opc;
	
	cout<<"Ingrese el numero de la tabla"<<endl;
	cin>>numeroTbl;
	
	switch(opc){
		case 1:
			
			for(i = 1;i<=10;i++){
				cout<<numeroTbl<<" X "<<i<<" = "<<numeroTbl * i<<endl;
			}
					
			break;
			
		case 2:
			while(i<=10){
				i++;
				cout<<numeroTbl<<" X "<<i<<" = "<<numeroTbl * i<<endl;
				
			}
			break;
		case 3:
			do{
				
				i++;
				cout<<numeroTbl<<" X "<<i<<" = "<<numeroTbl * i<<endl;
				
			}while(i<10);
			break;
	}
	
}
