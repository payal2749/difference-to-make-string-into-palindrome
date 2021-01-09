#include <bits/stdc++.h>
using namespace std;

int func(string s) 
{
    int n=s.length();
    int diff=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            int k=abs(s[i]-s[n-i-1]);
            diff=diff+k;
            
        }
    }
    return diff/2;


}

int main()
{

    string s{"abc"};
    
    
    
    cout<<func(s);
    return 0;
       
    
}