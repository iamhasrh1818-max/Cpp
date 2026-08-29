#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter the character "<<endl;
    cin>>ch;
    if((ch>='A')&&(ch<='Z')){
        cout<<"uppercase letter";
    }
else if((ch>='a')&&(ch<='z')){
    cout<<"lowercase letter";
}
else if((ch>='0')&&(ch<='9')){
    cout<<"digit";
}
else{
    cout<<"special character";
}

return 0;
}