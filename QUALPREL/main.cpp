#include <iostream>
#include <algorithm>

using namespace std;
int T,n,k,a[100010];
int main()
{
    cin>>T;
    for (int t=0; t<T; t++){
        cin>>n>>k;
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,greater<int>());
        int i;
        a[n]=-1;
        for (i=0;i<=n;i++){
            if (a[i]!=a[i+1]){
                if (k==1)
                    break;
                k--;
            }
        }
        cout<<i+1<<endl;
    }
    return 0;
}
