    #include<iostream>
    using namespace std;

    int main(){
        int number;
        for(int i=1;i<=10;i++){
            cin>>number;
            if(number<0){
                continue;
            }
            cout<<number<<endl;
        
        }

    return 0;
    }