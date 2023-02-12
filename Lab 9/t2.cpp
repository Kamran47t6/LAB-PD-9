#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"ENter size of array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The second element of array "<<arr[1]<<endl;
    cout<<"The fourth element of array "<<arr[3]<<endl;
}