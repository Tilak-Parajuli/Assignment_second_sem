//Write a C++ program to find the second largest number (or middle) among three numbers.
#include<iostream>
using namespace std;
void second_largest_of_3_num(int a, int b,int c){
    int mid=a;
    (a<b&&b<c)&&(mid=b);
    (b<a&&a<c)&&(mid=a);
    (a<c&&c<b)&&(mid=c);
    cout<<"second largest number between ("<<a<<","<<b<<","<<c<<") is "<<mid<<endl;
}
int main(){
    int x,y,z;
    cout<<"Enter three numbers :"<<endl;
    cin>>x>>y>>z;
    second_largest_of_3_num(x,y,z);
}