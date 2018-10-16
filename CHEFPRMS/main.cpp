#include <iostream>

using namespace std;
int T, n, bang[300], a[200];
int main()
{
    // 0 is prime, 1 is not
    bang[1]=1;
    bang[0]=1;
    for (int i=2;i<20; i++){
        if (bang[i]==0){
            for (int j=i*i;j<300;j+=i){
                bang[j]=1;
            }
        }
    }
    for (int i=1; i<=200; i++){
        for (int j=1; j<=200; j++){
            if (bang[i]==0 && bang[j]==0 && i*j<=200 && i!=j){
                a[i*j]=1;
            }
        }
    }
    cin>>T;
    for (int t=0;t<T;t++){
        cin>>n;
        int kt=0;
        for (int i=1;i<=n-1;i++){
            if (a[i]==1 && a[n-i]==1)
                kt=1;
        }
        if (kt==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
