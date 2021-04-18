//Write a C++ program to reverse a number.
#include<iostream>
using namespace std;
int main(){
    int n,rev,rem;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"Reversed number ="<<rev<<endl;
}