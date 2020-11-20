#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

      if(num1>num2)
      {
         if(num1>num3)
         cout<<"\n Largest number is "<<num1;
         else
         cout<<"\n Largest number is "<<num3;
    }
    else
    {
        if(num2>num3)
        cout<<"\n Largest number is "<<num2;
        else
        cout<<"\n Largest number is"<<num3;
    }
    return 0;
}
