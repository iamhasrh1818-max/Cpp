#include<iostream>
using namespace std;

//   CALL BY REFERENCE UISNG POINTER


void swappointer(int *a,int * b){
    int temp=*a;
        *a=*b;
        *b=temp;

}

int main(){
    int x=4,y=7;
    cout<<"The value of x is and the value of  y is "<<endl;
    cin>>x>>y;
    swappointer(&x,&y);
    cout<<"The vlaue of x is "<<x<<" and the value of y is "<<y<<endl;
    

return 0;
}