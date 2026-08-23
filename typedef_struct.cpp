#include<iostream>
using namespace std;

typedef struct employee
{
    int eID;
    char favChar;
    float salary;
 }ep;

int main(){
     ep harsh;
    harsh.eID=67875654;
    harsh.favChar='h';
    harsh.salary=50000000;

    cout<<"the value is "<<harsh.eID<<endl;
    cout<<"the value is "<<harsh.favChar<<endl;
    cout<<"the value is "<<harsh.salary<<endl;


return 0;
}