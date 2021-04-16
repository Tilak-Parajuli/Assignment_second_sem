//Write a program in C++ to read a four digit number and print the sum of its digits.
#include<iostream>
using namespace std;
void sum_n(int n){
    int r,m,sum=0;
    while(n!=0){
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    cout<<"SUM ="<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter the four digit number :"<<endl;
    cin>>n;
    sum_n(n);
    return (0);
}