#include<iostream>
using namespace std;
int main(){
    int n,num,s=0;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a number :";
    cin>>num;
    for(int i=0;i<n;i++){
        s=num*arr[i];
        cout<<s<<endl;
    }
    return 0;

}