#include<iostream>
#include<string.h>
using namespace std;
int main(){
     string arr[0]={"Pakistan"};
     arr[1]={"Lahore"};
    
     for(int i=0;arr[i]!='\0';){
        cout<<arr[i]<<endl;
     }
     return 0;
}