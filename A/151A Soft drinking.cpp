#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	 int a=k*l/nl;
	 int b=c*d;
	 int salt=p/np;
	 
	 int toast= min(min(a,b),salt)/n;
	 cout<<toast<<endl;

  return 0;
}

