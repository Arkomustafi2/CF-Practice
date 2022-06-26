#include <iostream>

using namespace std;


int main()
{

    int n, i=0, j=0,k, total, t=0;
    cin>> n;
    for(i=0; i<n; i++){
        total=0;
        for(j=0; j<3;j++){
            cin>> k;
            total= total + k;
        }
        if(total>=2){
            t++;
            }
        else{
            t=t+0;
            }
    }
    cout<< t;
    cout<< "\n";
}
