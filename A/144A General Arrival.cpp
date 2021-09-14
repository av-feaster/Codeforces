#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a,n;
	int max_v=0,min_v=1000;
	int maxi=0,mini=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
	
		if(a>max_v){
			maxi=i;
			max_v=a;
			
		}
		if(a<=min_v){
			mini=i;
			min_v=a;
		}
    }
		
	if(maxi>mini){
		cout<<(maxi-1)+(n-mini)-1;
	}
	else{
			cout<<(maxi-1)+(n-mini);
		}
    
	

  return 0;
}

