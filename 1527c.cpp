#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
#define FLP(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef pair<int, int> pi;


ll num_pairs(ll n){
	return n*(n-1)/2;

}

int main(){
	fio;
	ll t;cin>>t;
	ll counter;
	int n;
	unordered_map<ll,ll> map;
	vector<ll> dp;
	while(t--){
		map.clear();
		counter=0;
		cin>>n;
		vector<ll> dp(n,0);
		ll v;
		FLP(i,0,n){
			cin>>v;
			if(i==0){
				dp[0]=0;
			}else{
				dp[i]=dp[i-1];
			}
			if(map.find(v) != map.end()){
				dp[i]=dp[i]+map[v];
				map[v]=map[v]+i+1;
			}else{
				map[v]=i+1;
			}
		}
		FLP(i,0,n){
			counter+=dp[i];
		}
		cout << counter << endl;
	}
	return 0;
}
