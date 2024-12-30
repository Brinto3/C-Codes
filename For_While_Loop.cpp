#include <iostream>
using namespace std;
int main(){

string name;

cout<<"Enter a name:"<<endl;
cin>>name;

for(int i=0; i<=3; i++){
        cout<<name<<endl;
        int j=1;
   while(j<=3){
    cout<<"Loop count: "<<j<<endl;
    j++;
   }
}

return 0;
}
