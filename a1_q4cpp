#include<iostream>
using namespace std;
int main(){
    int low,high;
    cout<<"Lower value of range:";
    cin>>low;
    cout<<"Upper value of range: ";
    cin>>high;
    
    for(int i=low;i<=high;i++){
        bool prime=true;
        if(i==1 or i==0){
            prime=false;
        }
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=false;    
                break;
            }
        }
        if(prime==true){
            cout<<i<<"\n";
        }    
}
    return 0;
}
