#include <iostream>
#include <map>
#include <string>
using namespace std;
int T,n;
map<string, int> m;
int main()
{
    cin>>T;
    for(int t=0;t<T;t++){
        cin>>n;
        int tg=0;
        for (int i=1;i<=n;i++){
            string st;
            cin>>st;
            if (m[st]!=0)
                tg+=m[st]/2;
            else{
                tg+=2;
                for(int j=1;j<st.length();j++){
                    if (st[j]=='j' || st[j]=='k'){
                        if (st[j-1]=='j'||st[j-1]=='k')
                            tg+=4;
                        else
                            tg+=2;
                    }
                    if (st[j]=='d' || st[j]=='f'){
                        if (st[j-1]=='d'||st[j-1]=='f')
                            tg+=4;
                        else
                            tg+=2;
                    }
                }
                if (m[st]==0)
                    m[st]=tg;
            }
        }
        cout<<tg<<endl;
        m.clear();
    }
    return 0;
}
