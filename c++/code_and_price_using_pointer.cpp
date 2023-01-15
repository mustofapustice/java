#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class product{
public:
    int price;
    int code;
    void display(){
    cout<<"price:"<<price<<endl;
    cout<<"code:"<<code<<endl;

    }
};
int main(){
 int product::*p=&product::price;
 int product::*c=&product::code;
 int x,y;
 cout<<"Enter the price:";
 cin>>x;
 cout<<"Enter the code:";
 cin>>y;
 product m1;
 m1.*p=x;
 m1.*c=y;
 m1.display();
}
