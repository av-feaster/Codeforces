#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	char a[n];
    cin>>a;
    int s1=0,s2=0;
    bool istrue=true;
	for(int i=0;i<n;++i)
	{			
		if(a[i]=='7' || a[i]=='4'){
				if(i<n/2){
				s1=s1+a[i]-'0';
				//cout<<"s1: "<<s1<<" ";
			}
			else{
				 s2=s2+a[i]-'0';
				 //cout<<"s2: "<<s2<<endl;
				 
			}
		}
		else{
			istrue=false;
			break;
		}
		
	
	
	}
	    cout<<s1<<" "<<s2<<endl;
		if(s1!=s2)
		  istrue=false;	
        
        istrue?cout<<"YES"<<endl:cout<<"NO"<<endl;

  return 0;
}

