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
    double n,k,i,j=0;
    cin>> n;
    for(i=0; i<n;i++){
        cin>> k;
        j= j+k;
    }
    cout<< j/n;
}
