#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long int  n;
	cin>>n;
	long long int c=0;

	while(n>0){
		
		
		if(n%10==7||n%10==4){
			c++;
		}
		
		n=n/10;
	}
	(c==4 || c==7)?cout<<"YES"<<endl:cout<<"NO"<<endl;


  return 0;
}

