#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct toado{
    int x,y;
};

int n,m,T,c[1000];
toado a[90010];
int main()
{
    //freopen("input.inp","r",stdin);
    cin>>T;
    for(int t=0;t<T;t++){
        cin>>n>>m;
        int d=0;
        for(int i=1;i<=n;i++){
            string st;
            cin>>st;
            for (int j=0;j<m;j++){
                if (st[j]=='1'){
                    d++;
                    a[d].x=i;
                    a[d].y=j+1;
                }
            }
        }
        for (int i=1;i<=n+m-2;i++){
            c[i]=0;
        }
        for (int i=1; i<d; i++){
            for (int j=i+1;j<=d;j++)
                c[abs(a[i].x-a[j].x)+abs(a[i].y-a[j].y)]++;
        }
        for (int i=1;i<=n+m-2;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
