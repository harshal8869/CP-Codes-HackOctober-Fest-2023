#include <bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> node;
#define pi pair<ll,ll>
#define vpi vector<pi>
#define pll pair<ll, ll>
#define vp vector<pll>
#define all(x) (x).begin(), (x).end()
//#define _sorted(x) sort(all(x))
#define ff first
#define vll vector<ll>
#define ss second
#define vl vector<ll>
typedef vector<vl>vvl;
const int mod = 998244353;
const int maxi = 3e5 + 10;
const int MOD =1000000007;
//const int N = 2e6+10;
const int N=1000005;
using namespace __gnu_pbds; 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 
ll a[N],b[N],sum[N];
int tree[2 * N];
  
// ll a[N],b[N],f[N],v[N];
vector<int>g[N];
 const int NNN = 2e5 + 5;
const int N2 = 5e6 + 10;
ll inf = 1e9;
const ll mxN=1e6+1;
char s[N];
int arr[40];
int pf[N+1];
int prime[10000005];
vector<int> adj[200010];
vector<int> vis(200010);
vector<ll>sqs;
vector<ll> V;
vector<int>primes;
int fact[N],infact[N];
vector< vector< ll > > C;
vector<ll> H;
 
struct cmp{
	bool operator()(pair<int,int> a,pair<int,int> b){
		if((a.second-a.first)>(b.second-b.first)){
			return 0;
		}
		else if((a.second-a.first)==(b.second-b.first)){
			if(a.first<b.first){
				return 0;
			}
			else{
				return 1;
			}
		}
		else{
			return 1;
		}
	}
};
 
 
 


ll small_div(ll n){
    if(n % 2 == 0)
        return 2;
 
    for (ll i = 3;i * i<=n;i=i+2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}
void init(set<ll>&st){
	st.clear();
	st.insert(0);
}

    ll formulae(ll l, ll last){
    return (last * (last + 1)) / 2 - (l * (l - 1)) / 2;
}
//int dp[2][111][12321]; 
 int dp[2001][2001];
int maxiii(vector<int>&v, int size) {
    int maxi=0;
    sort(v.begin(),v.end());
    for(int i=0;i<size;i++){
        if(maxi == v[i]){
            maxi = maxi + 1;
        }
    }

    return maxi;
}
 
        

ll mod_mult(ll a, ll b) {
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}

ll mod_sum(ll a, ll b) {
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}
void thrill(){
 ll n, m, k;
    cin >> n >> m >> k;

    vector<ll>v1(n);
  
vector<ll>vec;
    for (int i = 0; i < n; i++) {
        cin>>v1[i];
    }
      vector<ll>v2(m);

    for (int i = 0; i < m; i++) {
        cin>>v2[i];
    }

    multiset<ll> a1(v1.begin(), v1.end());
    multiset<ll> b1(v2.begin(), v2.end());

   

    for (int i = 0; i < 30; i++) {
        ll add=0;

        if (i % 2 == 1) {
          if (*a1.rbegin() > *b1.begin()) {
                ll f = *a1.rbegin();
                ll s = *b1.begin();
                b1.erase(b1.begin());
                a1.erase(--a1.end());
                b1.insert(f);
                a1.insert(s);
            }

            for (ll j : a1) {
                add = add + j;
            }

            vec.push_back(add);
        }
        
        else {
            if (*b1.rbegin() > *a1.begin()) {
                ll f = *b1.rbegin();
                ll s = *a1.begin();
                a1.erase(a1.begin());
                b1.erase(--b1.end());
                a1.insert(f);
                b1.insert(s);
            }

            for (ll j : a1) {
                add = add + j;
            }

            vec.push_back(add);
    }
    }

    if (k == 1 || k ==2) {
        cout<<vec[k-1]<<endl;
    }
  
    else {
        if (k % 2 == 0) {
            cout<<vec[29]<<endl;
        } 
        else {
            cout<<vec[28]<<endl;
        }
    }
}
int main(){  
       
        int tc;
     cin>>tc;
   for(int i=0;i<tc;i++){
            thrill();
       }
        return 0;
    }
        
    
