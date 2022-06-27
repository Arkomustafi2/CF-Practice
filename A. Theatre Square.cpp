#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    long long int m,n,a,i=0,j=0;
    cin>> m >> n >> a;
    if(m==a &&n==a){
        cout<< 1;
    }
    else{
        if(m%a==0){
        i= m/a;
    }
    else{
        i= m/a +1;
    }
    if(n%a == 0){
        j= n/a;
    }
    else{
        j= n/a +1;
    }
    cout<< i*j;
    }

}
