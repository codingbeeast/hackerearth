#include <bits/stdc++.h>
using namespace std;
int remove(string s){
    int count=0;
    for(int i=0;i<s.length();){
        if(i==s.length()-1) return ++count;
        else if(s[i]==s[i+1]){
            count++;
            i++;
        }
        else i+=2;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<remove(s)<<endl;
    return 0;
}

