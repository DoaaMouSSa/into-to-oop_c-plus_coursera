#include <iostream>
using namespace std;
int main(){
    cout<<"1: print help"<<endl;
    cout<<"2: print exchange states"<<endl;
    cout<<"3: make an offer"<<endl;
    cout<<"4: make a bid"<<endl;
    cout<<"5: print wallet"<<endl;
    cout<<"6: continue"<<endl;
    cout<<"======================"<<endl;
    cout<<"choose from 1:6"<<endl;
    int userInput;
    cin>>userInput;
    if(userInput==0){
        cout<<"invalid choice";
    }
    return 0;
}