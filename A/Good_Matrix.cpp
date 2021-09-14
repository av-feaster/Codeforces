#include<iostream>
#include <algorithm>
#include <vector>
#define  ll long long  int
using namespace std;


int main() {
	ll n;
	ll i,j;
	ll sum=0;
	cin>>n;
	ll a[n][n];

	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0,j=0;i<n,j<n;i++,j++)
    {
        sum=sum+a[i][j];     //p  diag sum
        a[i][j]=0;
    }

    
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        sum=sum+a[i][j];    //sec diag sum
        a[i][j]=0;
    }

    
    for(j=0;j<n;j++)
    {
        sum=sum+a[n/2][j];  //mid row
        a[n/2][j]=0;
    }

    
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][n/2];  //mid col
        a[i][n/2]=0;
    }
	


    

	cout<<sum<<endl;
	
	

  return 0;
}

