#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    long long int m,n,i;
    cin>> m >>n;
    for(i=0;i<n;i++){
        if(m%10 == 0){
            m = m/10;
        }
        else{
            m = m -1;
        }
    }
    cout<< m;

}
