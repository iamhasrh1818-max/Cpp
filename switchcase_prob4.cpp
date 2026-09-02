        #include<iostream>
        using namespace std;

        int main(){
            int ch;
            cout<<"Display Restaurant Menu"<<endl;
            cout<< "1.Pizza=200"<<endl;
            cout<< "2.Burger=150"<<endl;
            cout<< "3.Sandwich=160"<<endl;
            cout<< "4.Coke=60"<<endl;
            cout<< "5.Water=40"<<endl;
            cout<<"Enter choice(1,2,3,4,5)"<<endl;
            cin>>ch;
            switch(ch){
                case 1:
                cout<<"Pizza"<<endl;
                cout<<"Price=200"<<endl;
                break;
                case 2:
                cout<<"Burger"<<endl;
                cout<<"Price=150"<<endl;
                break;
                case 3:
                cout<<"Sandwich"<<endl;
                cout<<"Price=160"<<endl;
                break;
                case 4:
                cout<<"Coke"<<endl;
                cout<<"Price=60"<<endl;
                break;
                case 5:
                cout<<"Water"<<endl;
                cout<<"Price=40"<<endl;
                break;
                default:
                cout<<"Invalid Menu";
                
            }

                


        return 0;
        }