#include<iostream>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    int count=0;
    for(int i=0;name[i]!='\0';i++){
         count++;
    }
    for(int i=count;i>=0;i--){
         cout<<name[i];
    }
    return 0;
    
}