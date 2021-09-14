#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;//  here kth dragon or mth.lth,nth dragon is the one which divides the d of the counting of the princes from 1....d
	int c=0;
	for(int i=1;i<=d;i++)
	{ 
	   if(i%k==0 || i%l==0 || i%m==0 || i%n==0 )
	   {c++;
	   }
		
	}
	cout<<c<<endl;

  return 0;
}

