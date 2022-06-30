#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int i,j,k=0;
    cin>> i >>j;
    while(i<=j){
        i = i*3;
        j = j*2;
        k++;
    }


    cout<< k << endl;
}
