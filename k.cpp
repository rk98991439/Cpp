#include <iostream>
using namespace std;

class sum
{
    private:
      float real;
      float imag;
      float a,b,c;
    public:
       sum(): real(0), imag(0){ }
       void input()
       {
           cout << "Enter real and imaginary parts respectively: ";
           cin >> a;
           cin >> b;
       }

       // Operator overloading
       sum operator - (sum c2)
       {
           sum temp;
           cout << "Enter real and imaginary parts respectively: ";
           cin >> real ;
           cin >> b;
       }           return temp;
       }

       void output()
       {
           if(imag < 0)
               cout << "Output Complex number: "<< real << imag << "i";
           else
               cout << "Output Complex number: " << real << "+" << imag << "i";
       }
};

int main()
{
    sum c1, c2, result,a,b,c;

    cout<<"Enter first complex number:\n";
    c1.input();

    cout<<"Enter second complex number:\n";
    c2.input();
    result = c1 - c2;
    result.output();

    return 0;
}