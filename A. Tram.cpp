#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n,i=0,j=0;
    cin>> n;
    int a[1001],b[1001];
    int sum =0, max=0;
    for(i=0;i<n;i++){
        cin>> a[i] >>b[i];
        sum = sum - a[i] + b[i];
        if(sum> max){
            max = sum;
            }
        else{
            max = max;
        }
        }
        cout << max << endl;
    }
