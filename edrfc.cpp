#include<iostream>
using namespace std;
class complex 
{
	int real,imag;
	public:
	void getdata();
	void putdata();
	void sum(complex*, complex*);
};
void complex::getdata() 
{cin >> real >> imag;}
void complex::putdata()
{cout<< real<< " + i" << imag << endl;}
void complex::sum(complex*c1, complex*c2)
{
	real=c1->real+c2->real;
	imag=c1->imag+c2->imag;
}
int main()
{
	complex x,y,z;
	cout<<"Enter the 1st compex number (real and imaginary part)"<<endl;
	x.getdata();
	cout<<"Enter the 2nd compex number (real and imaginary part)"<<endl;
	y.getdata();
	z.sum(&x,&y);
	cout<<"Output values"<<endl;
	cout<<"1st Complex number"<<endl;
	x.putdata();
	cout<<"2nd Complex number"<<endl;
	y.putdata();
	cout<<"Sum of Complex numbers"<<endl;
	z.putdata();
	}