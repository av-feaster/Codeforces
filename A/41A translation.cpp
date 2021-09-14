#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool chkString(string s, string t){
	bool istrue;
	istrue=false;
	for(int i=0;i<s.length();i++){
			if(s[i]== t[s.length()-i-1]){
				//cout<<"if :"<<s[i]<<ends<<t[s.length()-i-1]<<endl;
				
			  	istrue=true;
			}
			else{
			istrue=false;
			return istrue;}
			
		}
		return istrue;
		
}

int main() {
	
	string s,t;
	
	cin>>s;
	cin>>t;
	
	bool istrue=true;
	
	
	if(s.length() >t.length() || t.length()> s.length() ){
		cout<<"NO";
	}
	
	else{
	chkString(s ,t)?cout<<"YES"<<endl: cout<<"NO"<<endl;
		
		
		
	}
	
  return 0;
}

