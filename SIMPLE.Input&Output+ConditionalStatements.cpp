
#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3;
    cout<<"Enter the Three Numbers: ";
    cin>>num1>>num2>>num3;
    if(num1>num2 and num2>num3){
        cout<<num1<<" is the Greatest .";
    }
    else if (num2>num1 and num1>num3){
        cout<<num2<<"is The Greatest";}
else{
    cout<<"Num3 is The greatest";
}


    return 0;
}