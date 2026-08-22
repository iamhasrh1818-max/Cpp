#include<iostream>
using namespace std;

int main(){
    int marks[]={56,78,79,90};
  
    for(int i=0;i<4;i++){
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // another method
    int mathmarks[]={123,456,789,456};
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;


    // pointers and array

    int* p=marks;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;

    

return 0;
}