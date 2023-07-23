#include<iostream>
using namespace std;
class emp
{
	string emp_id, emp_name;
	public: void getemp()
	{
		cin>>emp_id>>emp_name;
    }
    void showemp()
    {
	cout<<"emp_id"<<emp_id<<endl<<"emp_name"<<emp_name<<endl;
	}
};
class march: public emp
{
	protected :int days;
	public:void getmarch()
	{
	cin>>days;
	}
};
class sal: public march
{
	protected :int sal;
	public:void getsal()
	{
	cin>>sal;
	}
};
class total: public sal
{
	public: int total_sal;
	void total_salary()
	{
		total_sal =(days*sal);
	}
};
int main()
{
	total obj[10];
	int i;
	for(i=0;i<10;i++)
	{
		obj[i].getemp();
		obj[i].getmarch();
		obj[i].getsal();
		obj[i].total_salary();
		
	}

}