#include<iostream>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    if(count%2==0){
        cout<<"True length is even :";
    }
    else
    cout<<"False ,length is odd :";
    return 0;
}