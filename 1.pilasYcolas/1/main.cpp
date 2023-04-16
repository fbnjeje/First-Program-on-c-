/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void deleteQueueItem(queue<int> q) {
    int qsize = q.size()-1;
    
    cout<<"Que index desea borrar: "<<endl;
    int indx;cin>>indx;
    
    if(indx==0) {
        q.pop();
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            cout<<curr<<endl;
        }
        
    } else if(indx==qsize) {
        int i=0;
        while(!q.empty()) {
            i++;
            if(i<qsize){
                int curr = q.front();
                q.pop();
                cout<<curr<<endl;   
            }
        }
    } else {
        int i=0;
        while(!q.empty()) {
            i++;
            if(i!=indx){
                int curr = q.front();
                q.pop();
                cout<<curr<<endl;   
            } else {
                q.pop();
            }
        }
    }
    
    /*
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        cout<<curr;
    }*/
    // [1 2 3 4 5 6 7]
    
    /*
    for(int i = 0;i<q.size();i++){
        cout<<*p<<endl;
        p++;
    }*/
    
}

void deleteStackItem(stack<int> s) {
    int sSize = s.size()-1;
    
     // [1 2 3 4 5 6 7]
     // s.top()
    
    cout<<"Que index desea borrar: "<<endl;
    int indx;cin>>indx;
    
    if(indx==0) {
        s.pop();
        while(!s.empty()) {
            int curr = s.top();
            s.pop();
            cout<<curr<<endl;
        }
        
    } else if(indx==sSize) {
        int i=0;
        while(!s.empty()) {
            i++;
            if(i<sSize){
                int curr = s.top();
                s.pop();
                cout<<curr<<endl;    
            }
        }
            
    } else {
        int i=0;
        while(!s.empty()){
            i++;
            if(i!=indx){
                int curr = s.top();
                s.pop();
                cout<<curr<<endl; 
            }
        
        }
    }
}

void getData(int option) {
            cout<<"Ingrese la cantidad de numeros q quiere: "<<endl;
            int itemsLen;cin>>itemsLen;
            
            if(option==1){
                //cola
                queue<int> q;
                for(int i=0; i<itemsLen; i++) {
                    int val;cin>>val;
                    q.push(val);
                }
                
                deleteQueueItem(q);
            }else {
                //pila
                stack<int> s;
                for(int i = 0;i<itemsLen;i++){
                    int val;cin>>val;
                    s.push(val);
                }
                
                deleteStackItem(s);
            }
}

int main() {
    while(true){
        
        cout<<"1.Cola"<<endl<<"2.Pila"<<endl<<"3.Salir"<<endl;
        int option;cin>>option;
        
            if(option == 1){
                //cola
                getData(option);
            }else if(option == 2){
                //pila
                getData(option);
            }else{
                break;
            }
            
            
        
    }

    return 0;
}
