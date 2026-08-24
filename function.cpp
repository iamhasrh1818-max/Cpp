#include<iostream>
using namespace std;


// int sum(int,int)---->acceptable
// int sum(inta,b)---->not acceptable
// int sum(int a,int b)----> acceptable
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}

int main(){
    int numb1,numb2;
    cout<<"Enter first number"<<endl;
    cin>>numb1;
    cout<<"Enter second number"<<endl;
    cin>>numb2;
    cout<<"The sum is "<<sum(numb1,numb2);

return 0;
}