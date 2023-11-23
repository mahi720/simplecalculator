#include<iostream>
using namespace std;
int main(){
    
    int a,b,ans;

    cout<<"Enter the value of a "<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the perform operation : "<<endl;
    cin>>op;

    switch(op)
    {
        case '+' : cout<<"Answer is : "<<a+b<<endl;
        break;
        
        case '-': cout<<"Answer is : " <<a-b<<endl;
        break;

        case '*': cout<<"Answer is : "<<a*b<<endl;
        break;

        case '/': cout<<"Answer is : "<<a/b<<endl;
        break;

        case '%': cout<<"Answer is : "<<a%b<<endl;
        break;

        default: cout <<"Please enter valid operation"<<endl;
    }
}