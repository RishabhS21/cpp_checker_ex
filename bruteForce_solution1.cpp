#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10;
int t,k,pre[N],nxt[N],cnt[10];
bool f[N];
signed main(){
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cin>>k;
		int start=0;
		for(int i=0;i<10;i++) cnt[i]=-1;
		for(int i=0;i<s.size();i++) f[i]=1,pre[i]=i-1,nxt[i]=i+1;
		for(int i=0;i<s.size();i++){
			if(cnt[s[i]-'0']<0) cnt[s[i]-'0']=i;
		}
		for(int i=1;i<10;i++){
			if(cnt[i]<=k && cnt[i]>=0){
				start=cnt[i];
				k-=cnt[i];
				for(int j=0;j<cnt[i];j++) f[j]=0;
				break;
			}
		}

		for(int i=start;i<s.size()-1;i++){
			if(k==0) break;
			if(s[i]>s[nxt[i]] ){
				for(int j=i;j>=0;j=pre[j]){
					//cout<<i<<" "<<j<<" "<<nxt[i]<<endl;
					if(j==start) break;
					if(k==0) break;
					if(s[j]>s[nxt[i]] ){
						f[j]=0;
						k--;
						pre[nxt[i]]=pre[j];
						nxt[pre[j]]=nxt[i];
					}
					else break;
				}
			}
		}
		
		for(int i=s.size()-1;i>=0;i--){
			if(k==0) break;
			if(f[i]) f[i]=0,k--;
		}
		

		for(int i=0;i<s.size();i++) if(f[i]) cout<<s[i];
		cout<<endl;
	}
	return 0;
}