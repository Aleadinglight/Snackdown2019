#include <iostream>

using namespace std;
int a[100100],T,n;
int main()
{
    cin>>T;
    for (int t=1;t<=T;t++){
        cin>>n;
        for (int i=1;i<=n;i++)
            cin>>a[i];
        int i;
        for (i=2;i<=n;i++){
            if (a[i]<a[i-1])
                break;
        }
        if (i<n){
            int j;
            for (j=i;j<=n;j++){
                if (i!=j && a[j]<a[j-1]){
                    break;
                }
            }
            if (j==n+1 && a[1]>=a[n]){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}
