#include<iostream>
#include<cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
int t;
cin>>t;
 while(t--)
 {
 	int n;
	cin>>n;
	int i=0,j=n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	bool istrue=true;
	for(j=n-1;j>0;j--)
	{
		if(a[j]-a[j-1]>1)
		{
			istrue= false;
			break;
		}
	}
	istrue?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
    return 0;
}

