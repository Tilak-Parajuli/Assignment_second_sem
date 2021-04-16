//Write a C++program that reads radius of circle and finds area and circumference.
#include<iostream>
#define pi 3.14
using namespace std;
class circle{

    private:
    float radius;

    public:
    void get_data(float r){
        radius=r;
    }
    void area(){
        float areaa=pi*radius*radius;
        cout<<"Area of circle = "<<areaa<<endl;
    }
    void circumference(){
        float circum=2*pi*radius;
        cout<<"Circumference of circle ="<<circum<<endl;
    }
};
int main(){
    int r;
    cout<<"Enter radius :"<<endl;
    cin>>r;
    circle obj1;
    obj1.get_data(r);
    obj1.area();
    obj1.circumference();
}