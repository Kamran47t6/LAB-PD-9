#include<iostream>
using namespace std;
int main(){
    string name;
    int count=0;
    getline(cin,name);
    for(int i=0;name[i]!='\0';i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='o'){
            count++;
        }
    }
    cout<<"NUmber of vowels :"<<count;
    return 0;
}