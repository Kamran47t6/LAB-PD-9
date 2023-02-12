#include<iostream>
using namespace std;
int main(){
    int n,num;
    
    cout<<"ENter n numbers :";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter new number to check :";
    cin>>num;
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            cout<<"Already Entered !!";
        }
    }
    return 0;
}