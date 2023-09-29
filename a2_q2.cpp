#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cout<<"Enter marks here: ";
    cin>>marks;
    if(marks>90){
        cout<<"Excellent";
    }
    else if(marks>80 && marks<=90){
        cout<<"Good";
    }
    else if(marks>70 && marks<=80){
        cout<<"Fair";
    }
    else if(marks>60 && marks<=70){
        cout<<"Meets expectations";
    }
    else if(marks<=60 && marks>0){
        cout<<"Below par";
    }
    else{
        cout<<"Please enter valid non-negative integer as marks." ;
    }
} 
