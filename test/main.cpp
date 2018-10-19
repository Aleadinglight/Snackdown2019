#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    freopen("input.inp","w",stdout);
    cout<<"1"<<endl;
    cout<<"300 300"<<endl;
    for(int i=1;i<=300;i++){
        for (int j=1;j<=300;j++)
            cout<<"1";
        cout<<endl;
    }
    return 0;
}
