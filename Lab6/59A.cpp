#include <iostream>
#include<string>
using namespace std;
int main()
{
    int U=0,L=0;
    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            U++;
        }
        else
        {
            L++;
        }
    }
    if(U<L)
    {
        for (int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;

    }
    if(U>L)
    {
        for (int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;

    }
    if(U==L)
    {
        for (int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;

    }

    return 0;


}
