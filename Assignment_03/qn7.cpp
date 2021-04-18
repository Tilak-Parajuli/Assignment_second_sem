//Write a C++program to count number of digits in a number.
#include<iostream>
using namespace std;
int main(){
    char n[100];
    int i,count=0;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    for(i=0;n[i]!='\0';i++){}
    cout<<"Total number of digits ="<<i<<endl;
}