#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    if(num<0&&num>100){
        cout<<"Invalid number ";
        
    }
   int category=num/10;

    switch(category){
        case 10:
        case 9:
        cout<<"Rank A";
        break;
        case 8:
        cout<<"Rank B";
        break;
        case 7:
        cout<<"Rank c";
        break;
        case 6:
        cout<<"Rank D";
        break;
        default:
        cout<<"Rank F";
        
    }

return 0;
}