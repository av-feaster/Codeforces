#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  
  int n,c=0;
  cin>>n;
  
  if(n<=10 || n>21){
  	c=0;
  }
  else if(n==20)
  {
  	c=15;
  }
  else if((n>10 &&n<20) || n==21){
  	c=4;
  }
  
  cout<<c;
  return 0;
}

