#include<iostream>
using namespace std;
int main(){
    int indx;
    cout<<"ENter the length of array :";
    cin>>indx;
    int arr[indx],p;
    cout<<"ENter five number in array:";
    for(int i=0;i<indx;i++){
        cin>>arr[i];
    }
    for(int i=0;i<indx;i++){
        p=arr[i]%10;
        if(p==7){
            cout<<"Boom!";
            break;
        }
        p=arr[i]/10;
        if(p==7){
            cout<<"Boom!";
            break;
        }
    }
    return 0;

}