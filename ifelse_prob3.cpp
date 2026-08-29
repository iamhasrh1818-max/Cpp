#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the three sides of triangle "<<endl;
    cin>>a>>b>>c;
    if((a>0)&&(b>0)&&(c>0)&&(a+b>c)&&(a+c>b)&&(b+c>a)){
        cout<<"valid triangle"<<endl;

    
    if((a==b)&&(b==c)){
        cout<<"This is equilateral triangle";
    }
    else if(((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(b!=a))){
        cout<<"This is isosceles triangle";
    }
    else if((a!=b)&&(a!=c)&&(b!=c)){
        cout<<"This is scalene triangle";
    }
}
    else{
        cout<<"invalid triangle";
    }

return 0;
}