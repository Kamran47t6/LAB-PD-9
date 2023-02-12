#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"ENter the size of array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    return 0;

}