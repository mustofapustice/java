#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<string.h>

using namespace std;
int main(){
string name;
int roll;
cout<<"Enter your name:";
getline(cin,name);
cout<<"Enter your roll:";
cin>>roll;
ofstream myfile("test.txt");
myfile<<"Name:"<<name<<endl<<"Roll:"<<roll<<endl;
myfile.close();
}
