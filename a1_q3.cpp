#include <iostream>
using namespace std;
int main() {
    int i, n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if(n == 0 or n == 1) {
    cout<<"0 & 1 are not prime numbers.";
    }
    else if(n<0) {
    cout<<"Please enter a non-negative number.";
    }
    for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
    cout<<n <<" is not a prime number.";
    break;
    }
    else{
        cout<<n<<" is a prime number.";
        break;
    }
    }
    return 0;
}
