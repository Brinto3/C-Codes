#include<iostream>
using namespace std;

int main(){

float radius, height, area, volume;
double pi = 3.1416;

cout<<"Enter radius of cylinder:";
cin>>radius;

cout<<"Enter height of cylinder:";
cin>>height;

area = 2*pi*radius*radius + 2*pi*height*height;

cout<<"Area of cylinder is:"<<area<<endl;

volume = pi*radius*radius*height;

cout<<"Area of volume is:"<<volume<<endl;

return 0;
}
