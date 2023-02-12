#include<iostream>
using namespace std;
int main(){
	int m=2;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int n;
    cout<<"ENter length of second array :";
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    cout<<endl;
    for(int i=0;i<m;i=1000){
         cout<<arr[i]<<" ";
         for(int j=0;j<n;j++){
           cout<<a[j]<<" ";
         }
    }
    for(int i=m-1;i<m+1;i=i+3){
    	cout<<arr[i]<<" ";
	}
    return 0;
}