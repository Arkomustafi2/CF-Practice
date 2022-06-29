#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    long long int n,m,i,j,k,s;

    cin>> n;
    for(i=0;i<n;i++){
        cin>> m;
        k=0;
        for(j=0;j<m;j++){
            cin>> s;
            if(s%2!=0){
                k++;
            }
    }
    if(k> m-k){
        cout<< m-k<<endl;
    }
    else{
        cout<< k<< endl;
    }
    }
}
