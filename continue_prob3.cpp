#include<iostream>
using namespace std;

int main(){
    char ch;
    
    for(int i=1;i<=10;i++){
        cin>>ch;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            continue;
        }
        cout<<ch<<endl;

    }

return 0;
}