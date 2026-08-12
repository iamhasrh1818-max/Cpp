#include<iostream>
using namespace std;

int main(){

    // selection structure :- if-else if-else ladder

    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if((age<18)&&(age>0)){
     cout<<"You are not eligible to vote"<<endl;
    }
    else if(age==18){
    cout<<"You are eligible to vote but you have to register "<<endl;
    }
    else if(age<1){
    cout<<"You are not born yet"<<endl;
    }
    else{
       cout<<"You are eligible to vote "<<endl;
    }

    // selection structure :- switch case

    int number;
cout<<"the number is"<<endl;
cin>>number;

    switch(number){
        case 1:
        cout<<"the no is 1"<<endl;
        break;
        case 18:
        cout<<"the number is 18"<<endl;
        break;

        default:
        cout<<"another number"<<endl;
    } 
    return 0;
}