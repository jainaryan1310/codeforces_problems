#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
#define FLP(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef pair<int, int> pi;

int main(){
	fio;
	ll t;
	cin>>t;
	vector<vi> graph;
	int n;
	int u;
	int v;
	while(t--){
		cin>>n;
		vi col(n,n+1);
		graph.clear();
		FLP(i,0,n){
			graph.push_back(col);	
		}
		while(n--){
			cin>>u;
			cin>>v;
			if(u>0){
				graph.at(u).at(v)=0;
				graph.at(v).at(u)=0;
			}else if(v==1){
				graph.at(u).at(v)=2;
				graph.at(v).at(u)=2;
			}else{
				graph.at(u).at(v)=1;
				graph.at(v).at(u)=1;
			}
		}
	}
}
