#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class student{
public:
    int roll;
     string myString;

    void getdata(){
         cout<<"Enter your roll:";
        cin>>roll;

      cout << "Enter your name: ";
      cin>>myString;
      cin.ignore();
      getline(cin, myString);


    }
    void putdata(){
    cout<<"Your name is :"<<myString<<endl;
    cout<<"Your roll is :"<<roll<<endl;

    }
};
class marks:public student{
public:
    int per;
    int arr[100];
    int sum=0;
    void input(int n){
    getdata();
    cout<<"Enter all subject marks:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }
    per = sum/n;
    cout<<"your persentage:"<<per<<endl;

    }
    void calculated(int n){
    cout<<"Your subject marks:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"subject"<<i+1<<":"<<arr[i]<<endl;
    }
    if(per>=80){
            cout<<"Grade:A+"<<endl;
        }
        else if((per<80)&&(per>75)){
            cout<<"Grade:A"<<endl;
        }
        else{
            cout<<"Grade:Fail"<<endl;
        }
    }
    void output(){
    putdata();
    cout<<"Your Result is :"<<endl;
    }

};
int main(){
    int s;
marks m1;
cout<<"Enter subject number:";
cin>>s;
m1.input(s);
m1.output();
m1.calculated(s);

}
