#include <iostream>
using namespace std;
int main(){

int num;
cout<<"Enter score of student:"<<endl;
cin>>num;

if(num == 100){
    cout<<"Ace"<<endl;
}

else if(num <= 0){
    cout<<"Retake";
}
else if(num >= 90){
    cout<<"A+";
}
else if(num >= 80){
    cout<<"A";
}
else if(num >= 70){
    cout<<"B";
}
else if(num >= 60){
    cout<<"C";
}
else if(num >= 50){
    cout<<"D";
}
else if(num < 50){
    cout<<"F";
}
else
{
    cout<<"Invalid"<<endl;
}
return 0;
}
