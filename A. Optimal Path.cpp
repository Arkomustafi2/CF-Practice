#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    long long int x, n,m,i,a=0,b=0;
    cin>> x;
    for(i=0;i<x;i++){
        cin>> n >> m;
        long long int t=0;
        long long int r=0;
        for(a=0; a<m; a++){
            r++;
            t= t + r;
        }
        for(b=1; b<n;b++){
            r= r+m;
            t = t+r;
        }
        cout<< t << endl;
    }

}
