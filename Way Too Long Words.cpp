#include <iostream>

using namespace std;


int main()
{

    int n, i, j=0, len;
    cin>> n;
    string in;
    for(i=0; i<n; i++){
        cin>> in;
        len= in.length();
        if(len>10){
            j= len-2;
            cout<< in[0];
            cout<< j;
            cout<< in[len-1];
        }
        else{
            cout<< in;
        }

        cout<< "\n";
    }
}
