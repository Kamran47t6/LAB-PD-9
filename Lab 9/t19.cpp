#include<iostream>
using namespace std;
int main(){
    int size,s=1;
    cout<<"ENter the size of array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
        if(s>arr[i]){
           s=arr[i];
        }
    }
    cout<<"The min number :"<<s;
    return 0;

}