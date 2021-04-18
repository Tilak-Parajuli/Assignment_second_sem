//Write a C++ program to display the series: ½  2/3  ¾  4/5  5/6…………………..n-1/n
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(i;i<=5;i++){
            cout<<i<<"/"<<i+1<<"\t";
    }
    cout<<"............n-1/n"<<endl;
}
