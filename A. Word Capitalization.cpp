#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    string s;
    cin>> s;
    if(s[0]>=97){
        s[0]-=32;
        cout<< s;
    }
    else{
        cout <<s;
    }

    //std :: uppercase(s[0]);
    //cout<< s;
}
