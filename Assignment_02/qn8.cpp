//Write a C++program that reads temperature in degree Celsius and convert it into Fahrenheit.
#include<iostream>
using namespace std;

class cel2_far{
    public:
    float celcius,fahrenheit;
    void get_data(){
        cout<<"Enter temperature in Celcius :"<<endl;
        cin>>celcius;
    }
    void conversion(){
        fahrenheit=(celcius*1.8)+32;
    }
    void display(){
        cout<<"Hello Buddy";
        cout<<endl<<celcius<<" degree Celcius= "<<fahrenheit<<" Degree Fahrenheit"<<endl;
    }
};
int main(){
    class cel2_far obj1;
    obj1.get_data();
    obj1.conversion();
    obj1.display();
}
