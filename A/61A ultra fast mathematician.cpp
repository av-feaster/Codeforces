#include<iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;

int main() {
  string s1,s2,s;
  cin>>s1>>s2;
  
  int l=s1.length();
  
  for(int i=0;i<l;i++){
  	if(s1[i]!=s2[i]){
  		s+='1';
	  }
	  else
	     s+='0';
  }
	cout<<s<<endl;
	

  return 0;
}

