#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
int n;
cin>>n;
int a[n],b[n];
int mina=100000;
int minb=100000;

for(int i=0;i<n;i++){
	cin>>a[i];
	if(a[i]<mina){
		mina=a[i];
	}
}
for(int i=0;i<n;i++){
	cin>>b[i];
	if(b[i]<mina){
		minb=b[i];
	}
}
int c=0;
int i=0;
while (a[i]!=a[i+1] && b[i]!=b[i+1]){
	
	if(a[i]>mina && b[i]>minb){
		a[i]--;
		b[i]--;
		c++;
	}
	else if(a[i]>mina){
		a[i]--;
		c++;
	}
	else {
	b[i]--;
	c++;
   }
   i++;
   if(i==n){
   	i=0;
   	
   }
}

cout<<c<<endl;
  return 0;
}

