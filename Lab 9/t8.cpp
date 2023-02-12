#include<iostream>
using namespace std;
int main(){
    string arr;
    cout<<"Enter word :";
    cin>>arr;
    for(int i=0;arr[i]!='\0';i++){
    	cout<<arr[i]<<" at location "<<i<<endl;
	}
	return 0;
}