#include<iostream>
using namespace std;
int main(){
    string arr[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    float price=0,p=500;
    string name;
    cout<<"Enter the name of movie :";
    cin>>name;
    for(int i=0;i<5;i++){
        if(arr[i]==name){
            if(i%2==0){
                price=500-50;
                break;
            }
        }
        else{
            price=500-100;
            break;
        }
    }
    cout<<"Price after discount ="<<price;
    return 0;
}