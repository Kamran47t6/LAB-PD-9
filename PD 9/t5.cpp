#include<iostream>
using namespace std;
int main(){
    int p;
    string arr[4];
    cout<<"Enter a string :";
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
     for(int i=0;i<3;i++){
        if(arr[i]==arr[i+1]){
            p=1;
            continue;
        }
        else
        {
p=0;
break;
        }
    }
    if(p==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;

    
}