#include<iostream>
#include <algorithm>
#include <vector>
#include<cmath>
#define ll long long
using namespace std;

int main() {
	int n;
	ll int d;
	cin>>n;
	cin>>d;
	
	 ll int a[1001];
	 
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
	 int c=0;
	 sort(a,a+n);
	 for(int i=0;i<n;i++){
	 	for(int j=i+1;j<n;j++){
	 	if(a[j]-a[i]<=d){
	 		c=c+1;
		 }
		 else break;
	   }
     }
     cout<<2*c;
  return 0;
}

