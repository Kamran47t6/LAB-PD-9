#include<iostream>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    cout<<name<<endl;
    string arr;
    bool flag=false;
    char ch;
    cout<<"Enter a name :";
    cin>>arr;
    cout<<"ENter a character :";
    cin>>ch;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==ch){
           flag=true;
           break;
        }
    }
    if(flag==true){
        cout<<"Character is available in the name :";
    }
    else
    cout<<"Char not available :";
    return 0;
}