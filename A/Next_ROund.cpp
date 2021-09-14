#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int i,n,k,c=0;
	cin>>n>>k;
	
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
    }
    
    if(a[k-1]==0)
    {
    	
    	for(i=0;i<n;i++)
    	{
    		if(a[i]>0 && a[k-1]==0){
    			c++;
			}
		}
	}
	else{
		for(i=0;i<n;i++)
    	{
    		if(a[i]>=a[k-1]){
    			c++;
			}
		}
		
	}
	cout<<c;
  return 0;
}

