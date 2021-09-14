//32B
#include<iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;

int main() {
	string t;
	cin>>t;
	
	for(int i=0;i<t.length();i++){
		
		if(t[i]=='-'&&t[i+1]=='.'){
			cout<<1;
			i++;
		}
		else if(t[i]=='-'&&t[i+1]=='-'){
			cout<<2;
			i++;
		}
		else if(t[i]=='.'){
			cout<<0;
		}
	}

  return 0;
}

