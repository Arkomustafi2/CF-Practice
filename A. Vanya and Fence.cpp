#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,h,i,j=0;
    int s[1000];
    cin>> n >> h;
    for(i=0;i<n;i++){
        cin>> s[i];
        if(s[i]<=h){
            j++;
        }
        else{
            j+=2;
        }
    }
    cout <<j;
}
