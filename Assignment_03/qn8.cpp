//Write a C++ program to find sum of digits of a number.
#include<iostream>
using namespace std;
int main(){
   int x,s=0;
   cout<<"Enter the number : ";
   cin>>x;
   while(x!=0){
       s=s+x%10;
       x=x/10;
       }
       cout << "\nThe sum of the digits : "<< s<<endl;
}