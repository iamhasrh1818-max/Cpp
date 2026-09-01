#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<"Enter operator(+,-,*,/)"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<"result= "<<a+b;
        break;
        case '-':
        cout<<"result= "<<a-b;
        break;
        case '*':
        cout<<"result= "<<a*b;
        break;
        case '/':
        if(b!=0){
        cout<<"result= "<<(float)a/b;
        }
        else{
            cout<<"Division is possible ";
        }
        break;
        default:
        cout<<"invalid operator";
    }


return 0;
}