//Write a C++ program that reads P,T, and R and find simple interest and amount.
#include<iostream>
using namespace std;

float p=0,r=0;
int t=0;

void get_data(){
    cout<<"Enter P,T,R respectively :"<<endl;
    cin>>p>>t>>r;
}
void simple_interest_and_amount(){
    float simple_i=(p*t*r)/100;
    float amount=simple_i+p;
    cout<<"Simple Interest ="<<simple_i<<endl;
    cout<<"Amount = "<<amount<<endl;
}
int main(){
    get_data();
    simple_interest_and_amount();
}