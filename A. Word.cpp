#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    char s[108];
    while(~scanf("%s",s))
    {
        int n=strlen(s),big=0,small=0;
        for(int i=0; i<n; i++)
            if(s[i]>=97)
                small++;
            else
                big++;
        if(small>=big)
        {
            for(int i=0; i<n; i++)
                if(s[i]<97)
                    s[i]+=32;
        }
        else
            for(int i=0; i<n; i++)
                if(s[i]>=97)
                    s[i]-=32;
        cout<<s<<endl;
    }
    return 0;
}
