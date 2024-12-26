#include <iostream>
using namespace std;
int main(){

float num1, num2;
int op;

cout<<"Enter number 1 : "<<endl;
cin>>num1;
cout<<"Enter number 2 : "<<endl;
cin>>num2;

cout<<"Option 1 for addition"<<endl;
cout<<"Option 2 for substraction"<<endl;
cout<<"Option 3 for multiplication"<<endl;
cout<<"Option 4 for division"<<endl;

cout<<"Choose an operation: "<<endl;
cin>>op;
if (op == 1) {
  cout<< num1 + num2 << endl;
  } else if (op == 2) {
    cout << num1 - num2 << endl;
 } else if (op == 3) {
 cout << num1 * num2 << endl;
   } else if (op == 4) {
   if (num2 != 0) {
     cout << num1 / num2 << endl;
   } else {
       cout << "Error zero not allowed" << endl;
    }
  } else {
 cout << "Invalid"<< endl;
  }

return 0;
}
