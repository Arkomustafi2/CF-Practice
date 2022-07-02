#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    long long int i,j,k,a,b=0,x=0,y=0;
    cin>> i >>j >> k;
    for(a=0;a<=k;a++){
        b = a*i;
        x = x + b;
    }

    if(x>=j){
        y= x-j;
    }
    cout<< y;
}
