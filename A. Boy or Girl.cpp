#include <iostream>
#include <cmath>
#include <string>
#include<bits/stdc++.h>

using namespace std;


int main()
{

    string inp;
    cin >> inp;
    int n= inp.length();
    int i,j,k=0;
    sort(inp.begin(),inp.end());
    for(i=0; i<n; i++){
        if(inp[i] != inp[i+1]){
            k++;
        }
    }
    if(k%2 ==0){
    cout<<"CHAT WITH HER!"<<endl;
    }
    else
    cout<<"IGNORE HIM!"<<endl;

}
