#include<iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;

int main() {
	ll n;
	int k;
	cin>> n>>k;
	while(k--)
	{
		int ld=n%10;
		ld!=0?n--:n/=10;
	}
   cout<<n<<endl;
  return 0;
}

