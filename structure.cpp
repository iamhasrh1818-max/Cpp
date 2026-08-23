#include<iostream>
using namespace std;

struct employee
{
    int eID;
    char favChar;
    float salary;
};
int main(){
    struct employee harsh;
    harsh.eID=67875654;
    harsh.favChar='h';
    harsh.salary=50000000;

    cout<<"the value is "<<harsh.eID<<endl;
    cout<<"the value is "<<harsh.favChar<<endl;
    cout<<"the value is "<<harsh.salary<<endl;

  
return 0;
}