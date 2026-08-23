#include<iostream>
using namespace std;

union money 
{
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice=34;
    cout<<m1.rice;
    // cout<<m1.car; we only use one data at time 

return 0;
}