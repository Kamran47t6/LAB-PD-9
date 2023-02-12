#include<iostream>
using namespace std;
int main(){
    int j=0;
    bool st=false;
     string name;
     cout<<"Enter a string :";
     cin>>name;
     for(int i=0;name[i]!='\0';i++){
            j++;
     }
     if(j%2==0){
        st=true;
     }
     else{
        st=false;
     }
     if(st==true){
        cout<<"true";
     }
     else
     cout<<"false";
    
    
}