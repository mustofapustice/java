#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
char ch;
double a,b;
cout<<"Arithmatic operator:";
cin>>ch;
cout<<"Enter two value:\n";
cin>>a>>b;
switch(ch){
case '+':
    cout<<"a"<<ch<<"b"<<"="<<a+b<<endl;
    break;
case '-':
    cout<<"a"<<ch<<"b"<<"="<<abs(a-b)<<endl;
    break;
case '*':
    cout<<"a"<<ch<<"b"<<"="<<a*b<<endl;
    break;

 case '/':
    cout<<"a"<<ch<<"b"<<"="<<a/b<<endl;
    break;
 default:
    cout<<"Error"<<endl;
}
return 0;
}
