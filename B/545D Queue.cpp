#include<iostream>
#include <algorithm>
#include<iterator>
#define ll long long int
#include <vector>
using namespace std;


int main() {
	ll  n;
	cin>>n;
	ll t[n];
    for (int i=0;i<n;i++){
    	cin>>t[i];
	}
	
	sort(t,t+n);
	ll cum_Sum=0;
	ll c=0;
	
	for(int i=0;i<n;i++){
		if(cum_Sum<=t[i]){
		
			cum_Sum+=t[i];
			c++;
		}
		//cum_Sum+=t[i];
	}

    cout<<c;
  return 0;
}

