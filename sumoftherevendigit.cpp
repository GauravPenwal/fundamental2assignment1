#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>v;
while(n>0){
int x= n%10;
v.push_back(x);
n=n/10;
}
int sum=0;
for(int i=0;i<v.size();i++){
if(v[i]%2==0)sum+=v[i];
else continue;
}
cout<<sum;
}