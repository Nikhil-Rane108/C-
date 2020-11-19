#include <iostream>

using namespace std;

int main()
{
    int num1,num2,swap;
    cout<<"Enter the Values: ";
    cin>>num1>>num2;
    cout<< "\n num1 = "<<num1<<"\n num2 = "<<num2;
    swap = num1;
    num1 = num2;
    num2 = swap;
    cout<<"\nSwapped Numbers are: ";
    cout<<"\n num1 = "<<num1<<"\n num2 = "<<num2;
    return 0;
}