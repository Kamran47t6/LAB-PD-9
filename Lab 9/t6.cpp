#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"ENter the size :";
    cin>>size;
    int number[size],sum=0;
    float avg=0;
    cout<<"ENter number in array :";
    for(int i=0;i<size;i++){
        cin>>number[i];
        sum=sum+number[i];
    }
    avg=sum/size;
    cout<<"Sum of first five numbers :"<<sum<<endl;
    cout<<"Average :"<<avg;
    return 0;
}