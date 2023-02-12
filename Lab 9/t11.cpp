#include<iostream>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    char letter;
    cout<<"ENter letter :";
    cin>>letter;
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        
            count++;
        
    }
    if(letter==name[count-1]){
        cout<<"True :";
    }
    else
    cout<<"False: ";
    return 0;
}