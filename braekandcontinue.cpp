#include<iostream>
using namespace std;

int main(){

    // BREAK STATEMENT

    for(int i=0;i<=40;i++){
        cout<<i<<endl;
        if(i==2){
            break;
        }
    }   
cout<<endl;

    for(int j=0;j<=40;j++){
        
        if(j==2){
            break;
        }
        cout<<j<<endl;
    }   
cout<<endl;

// CONTINUE STATEMENT

    for(int k=0;k<=40;k++){
        cout<<k<<endl;
        if(k==2){
            continue;
        }
    }
    cout<<endl;
    for(int k=0;k<=40;k++){
        
        if(k==2){
            continue;
        }
        cout<<k<<endl;
    }
   return 0;

}
