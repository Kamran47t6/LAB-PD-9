#include<iostream>
using namespace std;
int main(){
    string arr;
    cout<<"ENter word :";
    char d;
    getline(cin,arr);
    for(int i=0;arr[i]!='\0';i++){
        d=arr[i];
        if(d>='a' && d<='z'){
            d++;
            arr[i]=d;
            cout<<arr[i];
        }
        else if(d>='A' && d<='Z'){
            d++;
            arr[i]=d;
            cout<<arr[i];
        }
        else{
            arr[i]=d;
            cout<<arr[i];
        }
    }
    return 0;
}