/*  QN4. Write a  C++ program to read three numbers and print the following results
        a. Sum of the values.
        b. Average of three values.
        c. Largest of the three.
        d. Smallest of the three.
*/
#include<iostream>
using namespace std;
void sum(int x,int y,int z){
    int sum=x+y+z;
    cout<<"SUM ="<<sum<<endl;
}
void average(int r,int s,int t){
    int average=(float)(r+s+t)/3;
    cout<<"AVERAGE ="<<average<<endl;
}
void largest(int a,int b,int c){
    int max=a;
    max<b&&(max=b);
    max<c&&(max=c);
    cout<<"LARGEST OF THREE ="<<max<<endl;
}
void smallest(int m,int n,int o){
    int min=m;
    min>n &&(min=n);
    min>o &&(min=o);
    cout<<"MINIMUM NUM ="<<min<<endl;
}
int main(){
    int r,s,t;
    cout<<"Enter three numbers :"<<endl;
    cin>>r>>s>>t;
    sum(r,s,t);
    average(r,s,t);
    largest(r,s,t);
    smallest(r,s,t);
    return 0;
}