//04-09-21 18:31
#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n,a,b;
	cin>>n;
	int tp=0;
	int capacity=0;
	for(int i=0;i<n;i++)
	{
	  cin>>a>>b;
	  tp=tp-a;
	  tp=tp+b;
	  	if(tp>capacity)
	  	{
	  		capacity=tp;
		  }
		
	}
	cout<<capacity;

  return 0;
}

