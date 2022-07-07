#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n,i,j=0,k=0;
    cin>> n;
    string s;
    cin>> s;
    for(i=0;i<n;i++){
        if(s[i] == 'D'){
            j++;
        }
        else{
            k++;
        }
    }
    if(j>k){
        cout<< "Danik" << endl;
    }
    else if(j==k){
        cout<< "Friendship" << endl;
    }
    else{
        cout << "Anton" << endl;
    }
}
