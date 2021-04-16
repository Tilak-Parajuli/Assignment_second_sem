//Write a C++ program to read two integer values m and n and to decide and print whether m is a multiple of n.
#include<iostream>
using namespace std;
void multiple(int m, int n){
    if(m%n==0){
        cout<<"M is a multiple of N"<<endl;
    }
    else{
        cout<<"M is not a multiple of n"<<endl;
    }
}
int main(){
    int s,t;
    cout<<"Enter the value of two numbers m and n :"<<endl;
    cin>>s>>t;
    multiple(s,t);
}