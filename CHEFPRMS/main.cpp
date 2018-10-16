#include <iostream>

using namespace std;
int T, n, bang[300];
int main()
{
    cin>>T;
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
    for (int i=1; i<=100;i++){
        if(bang[i]==0)
            cout<<i<<" ";
    }
    for (int t=0;t<T;t++){
        cin>>n;
        for
    }
    return 0;
}
