#include<iostream>
#include<iomanip>

using namespace std;

int main(){
//constant variable 

     int a=56;
     cout<<"the value of a was:"<<a<<endl;
     a=74;
     cout<<"the value of a is:"<<a<<endl;

// const int a=65;
//     cout<<"the value of a is:"<<a<<endl;
// a=49; //you wiill get an error because a is constant
// cout<<"the value odfa is:"<<endl;

// manipulator in c+++
 
int m=2,n=45,z=456;
cout<<"the value of m without setw is :"<<setw(4)<<m<<endl;
cout<<"the value of n without setw is :"<<setw(4)<<n<<endl;
cout<<"the value of z without setw is :"<<setw(4)<<z<<endl;








int q=2,w=2,e=2,r=2,t=2,y=2,u=2,i=2,o=2,p=2;
cout<<setw(2)<<q;
cout<<setw(2)<<w;
cout<<setw(2)<<e;
cout<<setw(2)<<r<<endl;
cout<<setw(2)<<t;
cout<<setw(6)<<y<<endl;
cout<<setw(2)<<u;
cout<<setw(2)<<i;
cout<<setw(2)<<o;
cout<<setw(2)<<p<<endl;

// operator preference
int g=7,h=6;
int k;
k=(((g*87)+h)-46);
cout<<k<<endl;


return 0;
}