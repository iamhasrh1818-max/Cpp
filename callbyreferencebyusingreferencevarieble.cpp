#include<iostream>
using namespace std;

//   CALL BY REFERENCE BY UISNG REFERENCE VARIEBLE

void swapReferenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}

int main(){
    int x,y;
    cout<<"The value of x and the value of y is "<<endl;
    cin>>x>>y;
    swapReferenceVar(x,y);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;


return 0;
}