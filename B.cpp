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
const int N=5e5+123;
const int M=1e6+123;

struct swp {
	int from;
	int to;
	int guess;
};
vector<swp> v;
int main()
{

	ios_base:: sync_with_stdio(false); cin.tie(0);
	freopen("shell.in","r",stdin);
	freopen("shell.out","w",stdout);
	int n; cin>>n;
	v.resize(n);
	for(int i=0; i<n; i++) {
		cin>>v[i].from>>v[i].to>>v[i].guess;
	}
	int mx=0;
	for(int k=1; k<=3; k++) {
		int s=k;
		int ans=0;
		for(int i=0; i<n; i++) {
			if(v[i].from==s) {
				s=v[i].to;
			}
			else if(s==v[i].to) {
				s=v[i].from;
			}
			if(s==v[i].guess) {
				ans++;
			}
		}
		//cout<<ans<<endl;
		mx=max(ans,mx);
	}
	cout<<mx<<endl;

	return 0;
}
