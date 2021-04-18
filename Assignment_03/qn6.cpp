//Write a C++ program to find GCD and LCM of two numbers.
#include<iostream>
using namespace std;
int main(){
    int gcd,lcm,x,y;
    cout<<"Enter two numbers :"<<endl;
    cin>>x>>y;

    for (int i =1;i<1000;i++){
        if ((x % i == 0) && (y % i == 0)){
            gcd = i;          
        }
    }
    lcm=(x*y)/gcd;
    cout<<"GCD ="<<gcd<<endl<<"LCM ="<<lcm<<endl;
}