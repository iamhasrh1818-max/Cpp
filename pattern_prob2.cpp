#include<iostream>
using namespace std;

void prob2(int n){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"* ";
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
        prob2(n);
    }

return 0;
}
