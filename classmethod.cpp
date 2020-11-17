#include <iostream>

using namespace std;

class employee
{
public:
     int id_no;
     string name;
     void insert(int i, string n)
     {
         id_no=i;
         name=n;
     }
     void display()
     {
         cout<<id_no<<" "<<name<<endl;
     }
};
int main()
{
    employee e1;
    employee e2;
    e1.insert(25,"Nikhil");
    e2.insert(26,"Sagar");
    e1.display();
    e2.display();
    return 0;
}