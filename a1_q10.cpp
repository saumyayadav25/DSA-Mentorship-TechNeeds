#include <iostream>

using namespace std;

int main()
{
    int a,div;
    cout<<"enter the number you want to prime factorise: ";
    cin>>a;
    cout<<"prime factors are";
    for (int i = 2; i*i<=a; i++)
    {
       while (a%i==0)
       {
        cout<<i<<" ";
        a /=i;
       }
       if (a !=1)
       {
        cout<<a;
       }
    }
    return 0;
}
