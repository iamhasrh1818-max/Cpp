#include<iostream>
using namespace std;

int main(){
    int correct_pass=12345,pass;
    for(int i=1;i<=3;i++){
        cout<<"Password is :"<<endl;
        cin>>pass;
        if(pass==correct_pass){
            cout<<"correct password"<<endl;
            break;
        }
        else{
            cout<<"wrong password"<<endl;
        }
    }


return 0;
}