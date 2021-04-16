//Given three numbers, write a  C++ program to read three numbers from keyword and print out the largest of them without using if statement.
#include<iostream>
using namespace std;
int greatest(int a,int b,int c){
    int m = a; //assuming a as max       
    (m < b) && (m = b);
    (m < c) && (m = c);
    return m;
}
int main(){
    int first_num,second_num,third_num,largest_num;
    cout<<"Enter first,second and third number respectively :"<<endl;
    cin>>first_num>>second_num>>third_num;
    largest_num=greatest(first_num,second_num,third_num);
    cout<<"Greatest of three humber ="<<largest_num<<endl;
    return (0);
}

