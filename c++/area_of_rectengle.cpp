#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class area_of_rect{
public:
    int length=20;
    int width = 6;
    void area(){
    cout<<"the area of rectengular:"<<length*width<<endl;
    }
};
class square{
public:
    int length = 20;
    void area(){
    cout<<"The area of squar:"<<length*length<<endl;
    }
};
int main(){
area_of_rect m1;
square m2;
m1.area();
m2.area();
return 0;
}
