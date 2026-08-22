#include<iostream>
using namespace std;

int main(){

    //    &--->(address of) operator
    int a=3;
    int*b=&a;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;

    // *---> dereference(value at)operator

    cout<<"the value at address b is "<<*b<<endl;

    // pointers to pointers

    int**c=&b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;

    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address vlaue_at(value_at c) is "<<**c<<endl;

return 0;
}