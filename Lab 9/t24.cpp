#include<iostream>
using namespace std;
int main(){
    int n=0;
    char sentence[100];
    for(int i=0;i<15;i++){
        cin>>sentence[i];
    }
    for(int i=0;sentence[i]!='\0';i++){
        if(sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i' || sentence[i]=='o' || sentence[i]=='u' || sentence[i]=='A' || sentence[i]=='E' || sentence[i]=='I' || sentence[i]=='O' || sentence[i]=='U'){
        n++;
        }
        else if(sentence[i]==' ')
        {
        	cout<<" ";
		}
        else{
            cout<<sentence[i];
        }
    }
    return 0;
} 