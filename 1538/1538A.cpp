#include <bits/stdc++.h>
#include "random"
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
#define FLP(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef pair<int, int> pi;

int main(){
	ll t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int min_val;
		int max_val;
		min_val=n;
		max_val=1;
		int a;
		int min_pos=1;
		int max_pos=1;
		int pos=1;
		while(pos<=n){
			cin>>a;
			if(a<min_val){
				min_val=a;
				min_pos=pos;
			}
			if(a>max_val){
				max_val=a;
				max_pos=pos;
			}
			pos++;
		}
		cout<<min({max(min_pos, max_pos), n-min(min_pos, max_pos)+1, n-min_pos+max_pos+1, n-max_pos+min_pos+1})<<endl;
	}
}
