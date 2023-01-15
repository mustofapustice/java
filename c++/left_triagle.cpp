#include<iostream>
using namespace std;
void left_tringle(int n){
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}
int main(){
int n=5;
left_tringle(n);
}
