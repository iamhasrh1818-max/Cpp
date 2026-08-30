#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"the value of a and b is "<<endl;
    cin>>a>>b;
    cout<<"Eneter operator(+,-,*,/)"<<endl;
    cin>>op;
    if(op=='+'){
        cout<<"Result= "<<a+b;
    }
    else if(op=='-'){
        cout<<"Result= "<<a-b;
    }
    else if(op=='*'){
        cout<<"Result= "<<a*b;
    }
    else if(op=='/'){
        if(b==0){
            cout<<"not possible ";
        }
        else{
            cout<<"Result= "<<a/b;
        }
    }
    else{
        cout<<"Invalid operator";
    }

return 0;
}