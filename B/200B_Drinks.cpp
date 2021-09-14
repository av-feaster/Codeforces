#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>

#include<vector>
using namespace std;

int main()
{
   int n,t;
   int a;
   float c=0.00;
   cin>>n;
   t=n;

   while(t--)
   {
       
       cin>>a;
       c+=a;
   }
   c=c/n;
   cout<<setprecision(12)<<c;
   return 0;
}