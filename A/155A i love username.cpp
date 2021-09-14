#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;// no of contests
  cin>>n;
  int a;
  cin>>a;
  int b,w,c=0;
  b=a;w=a;
  
  for(int i=0;i<n-1;i++){
  	cin>>a;
  	if(a>b){
  		b=a;
  		++c;
	  }
	  if(a<w){
	  	w=a;
	  	++c;
	  }
  }
  cout<<c;
  return 0;
  }
