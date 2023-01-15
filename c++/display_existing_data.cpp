#include<iostream>
#include<fstream>

using namespace std;
int main(){
string name;
ifstream myfile("test.txt");
while(getline(myfile,name)){
    cout<<name<<endl;
}
myfile.close();

}
