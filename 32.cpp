#include<iostream>
using namespace std;
int main() {
    
	int i, n,factorial=1;
	bool is_prime = true;
	cout<<" Enter Number To Find Its Factorial and CHECK Number is Prime or Not :  ";
	cin>>n;
	for (int a=1;a<=n;a++) {
		factorial=factorial*a;
	}
	cout<<" a)  Factorial of Given Number is ="<<factorial<<endl;
	
	// prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << "b)" << n << " is a prime number \n";
  else
    cout << "b)  " << n << " is not a prime number \n";

	return 0;
}