#include <iostream>
#include <string>
using namespace std;
// wap to create class"student" with members:name,uid,age address and create child class student details with member function to display the details

class student
{
private:
    string name, uid, address;
    int age;
};

class child : public student
{
public:
    void get(void)
    {
        cout << "Enter your name:" << endl;
        cin >> name;
        cout << "Enter your  uid:" << endl;
        cin >> uid;
        cout << "Enter your address:" << endl;
        cin >> address;
        cout << "Enter your  age:" << endl;
        cin >> age;
    }

    void display(void)
    {
        cout << "NAME:" << name << endl
             << "UID:" << uid << endl
             << "ADDRESS:" << address << endl
             << "AGE:" << age << endl;
    }
};

int main()
{
    child c1;
    c1.get();
    c1.display();

    return 0;
}