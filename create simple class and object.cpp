#include <iostream>

using namespace std;

class Account
{
public:
      void AccountSecured()
      {
          cout<<"\n Your account is secured";
      }
};
int main()
{
    Account s;
    s.AccountSecured();
    return 0;
}