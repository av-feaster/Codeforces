#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int l=a.length();
		if(l>10){
		 cout<<a[0]<<l-2<<a[l-1]<<endl;
		}
		else
		  cout<<a<<endl;
		
	}
	


  return 0;
}

