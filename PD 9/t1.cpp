#include<iostream>
using namespace std;
int main(){
    int price;
    int indx=4;
    string arr[indx]={"peach","appple","guava","watermelon"};
    int num[indx]={60,70,40,30};
    string name;
    int quantity;
    cout<<"Enter the name of fruit :";
    cin>>name;
    cout<<"Enter quantity of fruit :";
    cin>>quantity;
    for(int i=0;i<indx;i++){
        if(arr[i]==name){
           price=quantity*num[i];
           break;
        }
    }
    cout<<"Total price :"<<price;
}