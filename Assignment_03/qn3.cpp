//Write a C++ program to print ASCII value of all ASCII value of all characters.
#include<iostream>
using namespace std;
void display(){
    for(int i=0;i<=255;i++){
        cout<<"ASCII value of "<<(char)i<<" = "<<i<<endl;
    }
}
int main(){
    display();
}