//Write aC++ program that will obtain the length and width of a rectangle from the user and compute its area and perimeter.
#include<iostream>
using namespace std;
void area(float l,float b){
    double area=(float)l*b;
    cout<<"AREA ="<<area<<endl;
}
void perimeter(float l,float b){
    float peri=(float)2*(l+b);
    cout<<"PERIMETER OF RECTANGLE ="<<peri<<endl;
}
int main(){
    float s,t;
    cout<<"Enter length and breadth of rectangle(babe)"<<endl;
    cin>>s>>t;
    area(s,t);
    perimeter(s,t);
    return 0;
}
