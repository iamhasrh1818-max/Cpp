#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character "<<endl;
    cin>>ch;
    switch(ch){
        case 'r':
        cout<<"Red Light"<<endl;
        cout<<"Stop";
        break;
        case 'y':
        cout<<"Yellow Light"<<endl;
        cout<<"Wait";
        break;
        case 'g':
        cout<<"Green Light"<<endl;
        cout<<"Go";
        break;
        default:
        cout<<"Invalid choice";
    }

return 0;
}