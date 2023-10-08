#include<iostream>
#include<cmath>
using namespace std;
int main()
{
        int k,n,w,s=0;
        cin>>k>>n>>w;
        for(int i=1;i<=w;i++)
        {
               s+=i;
        }
        int b=(s*k)-n;
        if(b<0)
                cout<<"0";
        else


        cout<<b<<endl;
        return 0;
}
