#include <iostream>
using namespace std;

int main() {
  int n1, n2, gcd;
  cout << "Enter first number: ";
  cin >> n1;
  cout << "Enter second number: ";
  cin >> n2;

  if ( n2 > n1) {   
    int x= n2;
    n2 = n1;
    n1 = x;
  }
    
  for (int i = 1; i <=  n2; ++i) 
  {
    if (n1 % i == 0 and n2 % i ==0) {
      gcd = i;
    }
  }

  cout << "Greatest Common Divisor (GCD) = " << gcd;

  return 0;
}
