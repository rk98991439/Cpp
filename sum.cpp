#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    void getdata();
    void putdata();
    void sum(complex c2, complex c2);
} void complex::getdata()
{
    cin >> real >> imag;
}
void complex::putdata()
{
    cout << real << "+i" << imag;
}
void complix::sum(complex c1 complex c2)
{
    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;
}
main()
{
    complex x, y, z;
    x.getdata();
    y.getdata();
    z.sum(x, y);
    x.putdata();
    y.putdata();
    z.putdata();
}
