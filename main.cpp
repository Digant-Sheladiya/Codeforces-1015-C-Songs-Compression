// JAY SWAMINARAYAN //
// DIGANT SHELADIYA //
// Codeforces:Digant0204 //

#include<iostream>
#include<cstring>
#include<cstdio>
#include<set>
#include<string>
#include<map>
#include<stack>
#include<cmath>
#include<queue>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define test int t; cin>>t; while(t--)
#define pi (3.141592653589)
#define ll long long int
#define of(i, x, n) for (ll i = x; i >= n; i--)
#define f(i, x, n) for (ll i = x; i < n; i++)
#define fr(i, m) for (auto i : m)
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define si set<int>
#define sl set<ll>
#define ss set<string>
#define sc set<char>
#define mii map<int,int>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define mss map<string,string>
#define msi map<string,int>
#define mis map<int,string>
#define msl map<string,ll>
#define mls map<ll,string>
#define qi queue<int>
#define qs queue<string>
#define ql queue<long long>
#define qc queue<char>
#define pb push_back
#define pp pop_back
#define float double
#define all(v) (v).begin(), (v).end()
#define bll(v) (v).begin(), (v).end(),greater<int>()
#define fi first
#define se second
#define maxi *max_element
#define mini *min_element
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define M 1e9+7
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define rtn return
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll fact(ll n){int fact = 1; for (int i = 1; i <= n; i++) fact *= i; return fact;}
void primeFactors(ll num)
{ll fac = 2; while (num > 1) {if (num % fac == 0) {cout << fac << '^'; num /= fac;ll pow = 1;while (num % fac == 0)
{num /= fac; pow++;} cout << pow << endl;}else {fac++;}}}
ll binpow(int x,int y)
{
    if(y==0){return 1;}
    if(y==1){return x;}
    ll ans=binpow(x,y/2);
    if(y%2==0){return (ans*ans);}
    return (ans*ans*x);
}
bool perfectsq(double x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isprime(int number)
{
    if (number <= 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    int boundary = (int)floor(sqrt(number));
    for (int i = 3; i <= boundary; i += 2)
        if (number % i == 0)
            return false;
    return true;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> v;
    ll sum=0,sum2=0;
    f(i,0,n)
        {
            ll x,y;
            cin>>x>>y;
            v.pb({x,y});
            sum+=v[i].fi;
            sum2+=v[i].se;
        }
    if(sum2>m)
        {
            cout<<-1<<endl;
            rtn;
        }
    if(n==1 && v[0].fi<=m)
        {
            cout<<0;
            rtn;
        }
    if(n==1 && v[0].fi>m)
        {
            cout<<1;
            rtn;
        }
    if(sum<=m)
        {
            cout<<0;
            rtn;
        }
    vl v2;
    f(i,0,n)
        {
            ll x=(v[i].fi)-(v[i].se);
            v2.pb(x);
        }
    sort(bll(v2));
    vl v3;
    v3.pb(sum-v2[0]);
    f(i,1,n)
        {
            v3.pb(v3[i-1]-v2[i]);
        }
    f(i,0,n)
        {
            if(v3[i]<=m)
                {
                    cout<<i+1; rtn;
                }
        }
}
int main()
{
    fast;
//    test
    solve();
    rtn 0;
}


