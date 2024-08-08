#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
int n;
cin>>n;
int sum=n;
stack<int>s;
int c=0;
while(n>0){
int x= n%10;
c++;
s.push(x);
n=n/10;
}
n=1;
while(s.size()>0){
    n = s.top()*10^c;
    s.pop();
    c--;
}
sum+=n;
cout<<sum;
}