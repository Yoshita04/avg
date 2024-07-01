#include<iostream>
using namespace std;
int main(){
int n,sum,avg;
cin>>n;
for(int i=1;i<=n;i++){
  sum=sum+i;
}
avg=sum/n;
cout<<"Average is "<<avg<<endl;
return 0;
}
