#include<stdio.h>
#include <iostream>
using namespace std;

int main()
{

  
    int a,i,j,k;
  
    cout << "Enter the integer: ";
    cin >> a;
 
    cout << "Entered integer is: " << a <<"\n";

  for(i=1;i<=a;i++)
  {
  
    for(k=1;k<=i;k++)
    {
        for(j=1;j<=i;j++)
    {
      printf("\t");
    }
      printf("*");
    }

    printf("\n");
  }

  return 0;
}

