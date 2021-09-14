#include<iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;

int main() {
 string a,b,c,s;
 cin>>a>>b>>c;
 s=a+b;
 sort(s.begin(),s.end());
 sort(c.begin(),c.end());
 s==c?cout<<"YES"<<endl:cout<<"NO"<<endl;
 return 0;
}

