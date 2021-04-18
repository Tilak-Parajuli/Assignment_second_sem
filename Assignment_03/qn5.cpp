//Write a C++ program to evaluate the series S = 1+2*1+3*2+……………………N*N-1.
#include<iostream>
using namespace std;
void series(int n){
    int s=1;                  //logic
    for(int i=2;i<=n;i++){
        s=s+(i*(i-1));
    }
    cout<<"S = "<<s<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of N :"<<endl;
    cin>>n;
    series(n);
}