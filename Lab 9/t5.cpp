#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"ENter size of array:";
    cin>>size;
    int number[size];
    cout<<"ENter numbers in array :";
    for(int i=0;i<size;i++){
        cin>>number[i];
    }
     for(int i=0;i<size;i++){
        cout<<number[i]<<endl;
    }
    return 0;
}