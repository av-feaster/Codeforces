#include<iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;


int main() {
    ll	int k2,k3,k5,k6;
	ll int ans=0;
	cin>>k2>>k3>>k5>>k6;
	
	
   ll int minm1=min(k2,min(k5,k6));
   k2=k2-minm1;
   k5=k5-minm1;
   k6=k6-minm1;
   
    ll int minm2 = min(k2, k3);
    cout << (minm1 * 256) + (minm2 * 32);
  return 0;
}

