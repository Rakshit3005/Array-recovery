#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n],d[n],c[n];
       for(int i=0;i<n;i++)
       {
        cin>>d[i];
       }
       a[0]=d[0];
         c[0]=0;
       for(int i=1;i<n;i++)
       {
        a[i]=d[i]+a[i-1];
        if( a[i-1]-d[i]>=0 && d[i]!=0)
        {
            
            c[i]=1;

        }
        else
        {
           c[i]=0;
        }
       }
       bool ans=false;
       for(int i=0;i<n;i++)
       {
          if(c[i]==1)
          {
            ans=true;
            break;
          }
       }
       if(ans)
       {
        cout<<-1<<endl;
       }
       else
       {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
       }

    }
    return 0;
}