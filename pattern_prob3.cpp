#include<iostream>
using namespace std;

void prob3(int n){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        prob3(n);
    }

return 0;
}
