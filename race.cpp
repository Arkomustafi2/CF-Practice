#include <iostream>

using namespace std;


int main()
{

    int n, i ,j=0,result;
    cin>> n;
    int set[n][4];
    for(i=0; i<n; i++){
        for(j=0;j<4; j++){
            cin>> set[i][j];

        }
    }

    for(i=0; i<n; i++){
            result=0;
            for(j=1; j<4; j++){
                if(set[i][j] > set[i][0]){
                result++;
                }
            }
            cout<< result ;
            cout<< " \n";
        }
}
