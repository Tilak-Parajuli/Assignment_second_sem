/*Write aC++ program that reads a number and check whether
 it is Armstrong’s number or not. (A number is called Armstrong’s 
 number if it is equal to sum of cubes of its digits. For example,
  153 is Armstrong number because 153 = (1*1*1)+(5*5*5)+(3*3*3).
  */
#include<iostream>
using namespace std;
void is_armstrong(){
     int n,s=0,r,dup;
     cout<<"Enter a number :"<<endl;
     cin>>n;
     dup=n;
     while(n>0){
        r=n%10;
        s=s+(r*r*r);       
        n=n/10;
        }
        if(dup==s)
            cout<<dup<<" is a armstrong number ."<<endl;
        else
            cout<<dup<<" is not a armstrong number ."<<endl;
}
int main(){
    is_armstrong();
}
