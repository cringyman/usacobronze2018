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
int arr[103];
int main()
{

	ios_base:: sync_with_stdio(false); cin.tie(0);
	freopen("sleepy.in","r",stdin);
	freopen("sleepy.out","w",stdout);
	int n; cin>>n;
	int ans=-1;
	for(int i=0; i<n; i++) cin>>arr[i];
	for(int i=0; i<n-1; i++) {
		if(arr[i]>arr[i+1]) {
			ans=i;
		}
	}
	if(ans==-1) cout<<0<<endl;
	else cout<<ans+1<<endl;


	return 0;
}
