#include<iostream>
using namespace std;

int sum(int,int);
 void g(void);  //---->void btw bracket is optional

int main(){
    int numb1,numb2;
    cout<<"Enter first number"<<endl;
    cin>>numb1;
    cout<<"Enter second number"<<endl;
    cin>>numb2;
    cout<<"the sum is "<<sum(numb1,numb2);
    g();

return 0;
}

int sum(int a ,int b){
    int c;
    c=a+b;
    return c;
}

void g(){
    cout<<"\nHello,Good Morning";
}