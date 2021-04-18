//Write a C++ program to find cubes and squares of first 10 natural numbers.
#include<iostream>
using namespace std;
void cubes(){
    int i,cube=0;
    for(i=1;i<=10;i++){
        cube=(i*(i+1)/2)*(i*(i+1)/2);  //formula cubes of n natural number
    }
    cout<<"Cubes of first 10 natural number ="<<cube<<endl;
}
void squares(){
    int i,sqr;
    for(i=0;i<=10;i++){
        sqr=(i*(i+1)*(2*i+1))/6;    //formula for squares of natural number
    }
    cout<<"Squares of first 10 natural number ="<<sqr<<endl;
}
int main(){
    cubes();
    squares();
}