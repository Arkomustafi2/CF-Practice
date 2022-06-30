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
    string s;
    cin>> i;
    cin>> s;
    //cout<< s[0]
    for(j=0;j<i;j++){
        if(s[j] == s[j+1]){
            k++;
        }
    }
    cout<< k <<endl;
}
