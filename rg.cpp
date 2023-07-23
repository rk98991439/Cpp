#include<iostream>
using namespace std;
class student 
{
    string name;
    int roll_no;
    float marks ;
    public:
    void getdata();
    void putdata();
    
};
void student::getdata()
{
    cin>>name>>roll_no>>marks;
}
void student::void putdata()
{
    cout<<name<<roll_no<<marks<<endl;
}
int main()
{
    student s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s1.putdata();
    s2.putdata();
}