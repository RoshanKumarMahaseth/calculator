// Making a calculator using simple codition and arithmetic operation.

#include <iostream>
#include <cmath>
using namespace std; 

int main(){

    double a,b;
    cout<<"Enter No.1: ";   //asking user to get numbers
    cin>>a;
    cout<<"Enter no.2: ";
    cin>>b;

    char op;         
    cout<<"Give the operation(+,-,*,/,%): ";   //asking user to give operation to perform
    cin>>op;

    if(op=='+'){
        cout<<"Sum is: "<< a + b << endl;
    }
    else if(op=='-'){
        cout<<"Subtract is: "<< a-b <<endl;
    }
    else if(op=='*'){
        cout<<"Multiplication is: "<< a*b <<endl;
    }
    else if(op=='/'){
        if(b==0){
            cout<<"Denominator is Zero.";
        }
        else{
            cout<<"Division is: "<< a/b << endl;
        }    
    }
    else if(op=='%'){
        cout<<"Remainder is:- "<< fmod(a,b)<<endl;
    }
    else{
        cout<<"Input is Invalid.";
    }

    return 0; 
}
