#include<iostream>
using namespace std;

void prob5(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
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
        prob5(n);

    }

return 0;

}

