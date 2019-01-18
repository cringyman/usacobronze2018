#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>


#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007

#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
  #define pb push_back
#define f first
#define s second
#define MAXN 100005
#define x first
#define y second
#define endl '\n'
using namespace std;
const int inf=1e9+123;
const int MOD=998244353;
const int M=1e6+123;
unordered_map<string,map<string,int> >mp;
const int N=105;
string animals[N];
unordered_set<string> my;
int main()
{

	ios_base:: sync_with_stdio(false); cin.tie(0);
	freopen("guess.in","r",stdin);
	freopen("guess.out","w",stdout);
	int n; cin>>n;
	for(int i=0; i<n; i++) {
		string a;
		int b;
		cin>>a>>b;
		animals[i]=a;
		for(int j=0; j<b; j++) {
			string st;
			cin>>st;
			my.insert(st);
			mp[a][st]++;;
		}
	}
	int ans=0;
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			int dif=0;
			for(string k:my) {
				dif+=min(mp[animals[i]][k],mp[animals[j]][k]);
			}
			ans=max(dif,ans);
		}

	}

	cout<<ans+1<<endl;
	return 0;
}
