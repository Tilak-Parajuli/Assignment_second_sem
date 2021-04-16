//Write a C++program that reads two numbers and swap them.
//Aurther :Tilaks
#include<iostream>
using namespace std;
class swap{
    public:
    int s,t;
    void get_data(){
        cout<<"Enter two numbers :"<<endl;
        cin>>s>>t;
        cout<<"Before SWAP = ("<<s<<","<<t<<")"<<endl;
    }
    void after_swap(){   //without temp v (swapping)
        s=s+t;
        t=s-t;
        s=s-t;
        cout<<"After SWAP = ("<<s<<","<<t<<")"<<endl;
    }

};
int main(){
    class swap obj1;
    obj1.get_data();
    obj1.after_swap();
}