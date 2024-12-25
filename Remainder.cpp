#include <iostream>
using namespace std;

int main(){

int divider;
cout<<"Enter a divider:";
cin>>divider;
int dividant;
cout<<"Enter a dividant:";
cin>>dividant;
int remainder;

remainder = dividant % divider;

cout<<"Remainder is:"<<remainder;

return 0;
}
