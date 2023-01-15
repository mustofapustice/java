#include<iostream>
using namespace std;

class student
{
    string name;
    int roll;
public:
    void input()
    {
        cout<<"enter your name: ";
        getline(cin,name);
        cout<<"enter your roll: ";
        cin>>roll;
    }
    void output()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
    }
};
class grade:public student
{
    int mark;
public:
    void putdata()
    {
        input();
        cout<<"enter your mark:";
        cin>>mark;
    }
    void getdata()
    {
        output();
        if(mark>100)
            cout<<"invalid mark"<<endl;
        else if(mark<0)
            cout<<"invalid mark"<<endl;
        else if(mark>=80 && mark<=100)
            cout<<"Grade:A+"<<endl;
        else if(mark>=75 && mark<80)
            cout<<"Grade:A"<<endl;
        else
            cout<<"Grade:F"<<endl;
    }
};
int main()
{
    grade g;
    g.putdata();
    g.getdata();

    return 0;
}
