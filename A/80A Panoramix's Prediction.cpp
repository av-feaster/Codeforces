#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isprime(int n){
	//corner cases
	if(n<=1)
	 return false;
	 
	 if(n<=3)
	  return true;
	  
	  if(n%2==0 || n%3==0){
	  	return false;
	  }
	  
	  for(int i=5;i*i<=n;i=i+6){
	  	if(n%i==0 || n%(i+2)==0){
	  		return false;
		  }
	  }
	  
	  return true;
}

int main() {
	
	int n,m;
	cin>>n>>m;
	for(int i=n+1;i<=m;i++){
		if(isprime(i))
		{if (i==m){
			  cout<<"YES"<<endl;
			  return 0;
		    }
		    else {
		    	cout<<"NO"<<endl;
		    	return 0;
		   }
	    }
	    
	}
	cout<<"NO" <<endl;
	return 0;
	
	
	

 
}

