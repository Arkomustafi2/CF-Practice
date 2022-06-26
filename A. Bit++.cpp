#include <iostream>

using namespace std;


int main()
{

    int n, i=0, x=0;
    cin>> n;
    string input;
    for(i= 0; i<n; i++){
        cin>> input;
        if(input== "++X" || input== "X++" ){
            x= x+1;
        }
        else if(input== "--X" || input== "X--"){
            x=x-1;
        }
        else{
            x;
        }
    }

    cout<< x;
}
