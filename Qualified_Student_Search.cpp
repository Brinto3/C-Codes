#include <iostream>
using namespace std;
int main(){

int id;

cout<<"Enter the student id (1-10):"<<endl;
cin>>id;

switch(id){

case 1:
cout<<"Not Selected"<<endl;
break;

case 2:
cout<<"Selected"<<endl;
break;

case 6:
cout<<"Not Selected"<<endl;
break;

case 10:
cout<<"Selected"<<endl;
break;

default:
    cout<<"Did not gave exam";

}

return 0;
}
