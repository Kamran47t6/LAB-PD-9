#include<iostream>
using namespace std;
int main(){
    int indx,n;
    cout<<"Enter length of array :";
    cin>>indx;
    cout<<"ENter num of times even-odd transformation needed to be done:";
    cin>>n;
    int arr[indx];
    for(int i=0;i<indx;i++){
        cin>>arr[i];
    }
    for(int i=0;i<indx;i++){
        for(int j=0;j<n;j++){
        if(arr[i]%2==0){
           arr[i]=arr[i]-2;
        }
        else
        {
           arr[i]=arr[i]+2;
        }
        }
    }
    for(int i=0;i<indx;i++){
        cout<<arr[i]<<endl;

    }
}