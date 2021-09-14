#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
 int n,p;
 cin>>n;
 int a[n+1];
 a[0]=0;
 for(int i=1;i<=n;i++){
 	cin>>p;
 	a[p]=i;
 }
 
 for(int i=1;i<=n;i++){
 	cout<<a[i]<<" ";
 }
  return 0;
}

