#include <iostream>
using namespace std;
int main(){

float cels;
double CTK, CTF;

cout<<"Enter the Celsius: ";
cin>>cels;

CTK = cels + 273.15;
cout<<"Celsius to Kelvin:"<<CTK<<endl;

CTF = 1.8 * cels + 32;
cout<<"Celsius to Farenhaite:"<<CTF<<endl;

return 0;
}
