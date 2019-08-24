#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int len=0;
    if(b[n-1]!=0){
        int st=b[n-1];
        if(st==1) len=1;
        else
        for(int i=n-2;i>=0 && b[i]>0;i--){
            if(b[i]+1==b[i+1]){
                if(b[i]==1){
                    len=st;
                }
                else continue;
            }
            else break;
        }
    }
    int ans=0;
    for(int i=0;i<n-len;i++){
        if(b[i]>0) ans=max(ans,i+2-b[i]);
    }
    if(len==0) cout<<ans+n<<endl;
    else if(ans==0) cout<<n-len<<endl;
    else{
        for(int i=0;i<n;i++){
            if(b[i]>0) ans=max(ans,i+2-b[i]);
        }
    }
    return 0;
}

