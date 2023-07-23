#include<iostream>
using namespace std;
class student
{
	char name[20];
	int roll_no;
	public: 
	int math,chem,phy,eng;
	void get_data();
	void show_data();
};
class grade:public student
{
	int total;
	float percentage;
    float avg;
	public:
	void show();
};
void student::get_data()
{
	cout<<"enter name "<<endl;
    cout<<"roll no"<<endl;
	cin>>name>>roll_no;
	cout<<"enter marks"<<endl;
	cin>>math>>chem>>phy>>eng;
}
void student::show_data()
{
	cout<<"\nname:"<<name<<"\nroll no:"<<roll_no<<endl;
	cout<<"maths: "<<math<<"\nchem: "<<chem<<"\nphy: "<<phy<<"\neng: "<<eng<<endl;
}
void grade::show()
{
	total=math+chem+phy+eng;
	percentage=total/4;
    avg=total/4;
	cout<<"total: "<<total<<endl;
	cout<<"percentage: "<<percentage<<"%"<<endl;
    cout<<"avg: "<<avg<<" "<<endl;
}
int main()
{
	grade c;
	c.get_data();
	c.show_data();
	c.show();
}