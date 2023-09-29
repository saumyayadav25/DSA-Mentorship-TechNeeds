#include<iostream>

using namespace std;

int main (){
    int a,k;
    cout<<"enter the number: ";
    cin>>a;
    cout<<"enter how many time you want to rotate the number: ";
    cin>>k;
    int rotate=0;
    for (int i=1;i<=k;i++)
    {
        while (a>0)
        {
            int lastdigit=a%10;
            rotate=rotate*10+lastdigit;
            a=a/10;
        }
        
    }
    cout<<"rotated nmber: "<<rotate;
    return 0;
}
