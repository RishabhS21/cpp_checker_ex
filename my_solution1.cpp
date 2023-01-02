#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include <utility>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
typedef long long ll;


string func(string s, int n){
    if(n==0){
        return s;
    }
    int i=0;
    if(s[1]=='0'){
        i=1;
    }
    while(i<s.length()-1){
        if((int)s[i] <= (int)s[i+1]){
            i++;
        }
        else{
            s.erase(s.begin() + i);
            return func(s, n-1);
            break;
        }
    }
    while(n!=0){
        s.erase(s.end()-1);
        n--;
    }
    return s;
}
void solve(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    cout<<func(s,n)<<"\n";
}

int main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
          
}