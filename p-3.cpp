#include <iostream>

using namespace std;


int main()
{

    long int n,i=0,j=0,t=0,k,m;
    int inp[100][100];
    cin>> n;
    for(i=0; i<n; i++){
        cin>> k;
        cin>> m;
        t=0;
        for(j=0; j<k; j++){
            cin>> inp[i][j];
            t = t + inp[i][j];

        }
        if ( t<= m ){
            cout<< "0";
            cout<< "\n";
        }
        else{
            cout<<  t - m;
            cout<< "\n";
        }


    }


}
