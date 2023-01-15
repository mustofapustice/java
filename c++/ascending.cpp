#include<iostream>
using namespace std;
int main(){
int i,j,n,temp=0;
cout<<"Enter size of array:";
cin>>n;
int arr[n];

for(i=0;i<n;i++){
    cout<<"Enter elements:";
    cin>>arr[i];
}
for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
cout<<"the ascending order is :"<<endl;
for(i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
return 0;
}
