#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    int x = n;
    while(n!=0){
        int y = n%10;
        cout<<y;
        n=n/10;
    }
    cout<<" is the reverse of the number.";
    return 0;
}
