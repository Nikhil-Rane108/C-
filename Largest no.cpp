#include <iostream>

using namespace std;

int main()
{
    float num1,num2,num3;
    cout<<"Enter Three Numbers: ";
    cin>>num1>>num2>>num3;
    
    if ((num1>=num2) && (num1>=num3))
        cout<<"\nLargest Number: "<<num1;
        
    else if ((num2>=num1) && (num2>=num3))
        cout<<"\nLargest Number: "<<num2;
        
    else
        cout<<"\nLargest Number: "<<num3;
    return 0;
}