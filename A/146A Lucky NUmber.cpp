#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    char a[105];
    int i,j,n;
    while(scanf("%d",&n)!=EOF)
    {
        int flg=1,s1=0,s2=0;
        scanf("%s",a);
        for(i=0;i<n;i++)
        {
            if(i<n/2)
                s1=s1+a[i]-'0';
            else
                s2=s2+a[i]-'0';
            if(a[i]=='4'|| a[i]=='7')
            {
                flg=1;
            }
            else
            {
                flg=0;
                break;
           }
         }
         printf("%d %d\n",s1,s2);
         if(s1!=s2)
             flg=0;
         if(flg)
             printf("YES\n");
         else
             printf("NO\n");
     }
    return 0;
 }
