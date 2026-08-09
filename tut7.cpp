#include<iostream>

using namespace std;

int c=645;

int main(){
int a,b,c;
cout<<"the value of a is "<<endl;
cin>>a;
cout<<"the value of b  is "<<endl;
cin>>b; 
c=a+b;
cout<<"the sum is equal to "<<c<<endl;
cout<<"the global sum is "<<::c<<endl;

float d=43.4;
long double e=43.4;
cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
cout<<"the size of 43.4 is "<<sizeof(43.4)<<endl;
cout<<"the size of 43.4f is "<<sizeof(43.4f)<<endl;
cout<<"the size of 43.4F is "<<sizeof(43.4F)<<endl;
cout<<"the size of 43.4l is "<<sizeof(43.4l)<<endl;
cout<<"the size of 43.4L is "<<sizeof(43.4L)<<endl;
return 0;
}

