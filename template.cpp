// gourav_27

/*
stars don’t ask to be seen,
they shine regardless...
*/

#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
//comment out if using double/float

#define gourav_27 ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);int Tests=1;
#define multi_tests cin>>Tests;
#define test_cases while(Tests--)

#define int long long int

#define ll long long
#define dd long double
#define sz size()
#define rtn return
#define rnt return
#define ff first
#define ss second
#define endl '\n'
#define nl '\n'
#define br cout<<'\n'

inline void ln(){cout<<'\n';}
template<typename X> inline void outln(X x){ cout<<x<<'\n';}
template<typename X> inline void out(X x){ cout<<x<<' ';}
#define accum(a) accumulate(a.begin(),a.end(),0LL)
#define lb(a,x) lower_bound(a.begin(),a.end(),x) - a.begin()
#define ub(a,x) upper_bound(a.begin(),a.end(),x) - a.begin()

#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vl vector<ll>
#define vvl vector<vl>
#define vd vector<dd>
#define vvd vector<vd>
#define vc vector<char>
#define vvc vector<vc>
#define vs vector<string>
#define vb vector<bool>
#define vvb vector<vb>

#define pi pair<int,int>
#define vpi vector<pi>
#define pl pair<ll,ll>
#define vpl vector<pl>

#define loop(i,a,b)         for(int i=a;i<b;i++)     //for loop from a(included)->b(included)
#define roop(i,b,a)         for(int i=b;i>=a;i--)    //rev. for loop from b(included)->a(inluded)
#define all(x)              x.begin(),x.end()
#define sortAll(x)          sort(all(x));            //sort in ascending
#define tr(it,a)            for(auto it=a.begin();it!=a.end();it++)   // to iterate in something named a
#define rtr(it,a)           for(auto it=a.rbegin();it!=a.rend();it--)   // to iterate in something named 
#define inp(a,n)            for(int i=0;i<n;i++) cin>>a[i]
#define inp_vec(vec, n)     for(int i=0;i<n;i++) {int x;cin>>x;vec.push_back(x);}
#define inp_mat(mat, n, m)  for(int i=0;i<n;i++) {for(int j=0;j<m;j++) {int x;cin>>x;mat[i][j]=x;}}

//====================================DEBUG============================================================
#define dbg(x) cerr << #x << " = " << x << endl;
#define dbg_arr(arr) cerr << #arr << ": "; for (auto val : arr) cerr << val << " "; cerr << endl;
#define dbg_map(mp) cerr << #mp << " : " << endl; for (auto pr : mp){ cerr<<pr.first << " " << pr.second<<'\n';} cerr<< endl;
#define dbg_mat(grid) for (auto row : grid) { for (auto elem : row) cerr << elem << " "; cerr << endl; }
#define dbg_vpi(v) cerr << #v << " : " << endl; for(auto p:v){ cerr<<"{ "<<p.first<<" , "<<p.second<<" }, "; } cerr<<"\n";
//=====================================================================================================

// ================================== take ip/op like vector directly!==================================
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
template<typename T,typename X> ostream &operator<<(ostream& cout,const vector<pair<T,X>> &v){ int n= v.size(); if(!n){ return cout;} cout<<"{ "<<v[0].first<<" , "<<v[0].second<<" } "; for(int i=1;i<n;i++){ cout<<",{ "<<v[i].first<<" , "<<v[i].second<<" } "; } return cout; }
// ===================================END Of the inp/op module ==========================================

//===================min-max=====================
template<typename T> T _max(T a,T b){ rtn (a>b)? (a):(b); }
template<typename T> T _min(T a,T b){ rtn (a<b)? (a):(b); }
//=================end of min-max=================

//===================floor-ceil======================
template<typename T>
T cl(T num,T k){
    if(num==0) rnt 0;
    else if(num>0)
        rtn (num+k-1)/k;
    else //-ve
        rtn -1*(abs(num)/k);
}
template<typename T>
T fl(T num,T k){
    if(num==0) rnt 0;
    else if(num>0)
        rtn (num/k);
    else //-ve
        rtn -1*((abs(num)+k-1)/k);
}
//===============end of floor-ceil======================

//=================Maths================================
vi sieve(int n) {
    vector<bool> is_prime(n + 1, true);  
    is_prime[0] = is_prime[1] = false;   
    for (int i = 2; i * i <= n; i++) {   
        if (is_prime[i]) {               
            for (int j = i * i; j <= n; j += i) is_prime[j] = false;
        }
    }
    vi primes;  
    loop(i,2,n+1) {
        if (is_prime[i])  primes.push_back(i); 
    }
    return primes;
}
void spf_sieve(vector<int>& spf){
    int n=spf.sz;
    spf[1] = 1;
    for(int i=2;i<n;i++){
        spf[i] = i;
    }
    for(int i=2;i*i<n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<n;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}
int nCr(int n, int r) { // O(r)
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    int res = 1;
    r = min(r, n - r);
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b; 
}
bool isPerfectSqr(int num){
    int t = (int)sqrt(num);
    rnt (t*t==num);
}
int _sqrt(int num){
    int val= (int)(sqrtl(num))+2;
    while(val*val > num) val--;
    rtn val;
}
//======================================================

//================BIT MANIPULATION=========================================
#define checkbit(mask,bit) ((mask >> bit) & 1ll)
#define onbit(mask,bit) ((mask)|(1LL<<(bit)))
#define offbit(mask,bit) ((mask)&~(1LL<<(bit)))
#define changebit(mask,bit) ((mask)^(1LL<<bit))

//be careful, different functions for int and long long int
#define ctz(x)          __builtin_ctz(x)    //count trailing zeros
#define ctzll(x)        __builtin_ctzll(x)
#define clz(x)          __builtin_clz(x)    //count leading zeros
#define clzll(x)        __builtin_clzll(x)
#define pop_cntll(x)    __builtin_popcountll(x) //count set bits
#define pop_cnt(x)      __builtin_popcount(x)
//==========================================================================

//=============================strings=============================
bool isSubstring(const string& substring, const string& mainStr) {
    return mainStr.find(substring) != string::npos;
}
//=================================================================

//===============================modular arithmetic====================
const int mod=1000000000+7;
    
ll mod_pow(ll a,ll b) {
    ll res=1LL;
    a%=mod;
    if(a==0){
        if(b==0) rnt 1;
        else rtn 0;
    }
    while(b){
        if(b&1)res=res*a%mod;
        a=a*a%mod; 
        b>>=1;
    }
    rtn res;
}
ll mod_mul(ll a,ll b){
    return ((a%mod) * (b%mod))%mod;
}
ll mod_add(ll a,ll b){
    return ((a%mod) + (b%mod))%mod;
}
ll mod_sub(ll a, ll b){
    return ((a%mod-b%mod+mod)) % mod;
}
ll mod_inv(ll a,ll b=mod-2){
    return mod_pow(a,b);
}
ll mod_div(ll a,ll b){
    int invb=mod_inv(b);
    return mod_mul(a,invb);
}
//=============================================================================

int knightx[8]={-1,-2,-2,-1,1,2,2,1};
int knighty[8]={-2,-1,1,2,2,1,-1,-2};

int dr[4]={-1,0,1,0}; //up,left,down,right
int dc[4]={0,-1,0,1};
inline bool in(int i,int j,int n,int m){ rtn (i>=0 && i<n && j>=0 && j<m);}


void solve(){

}

int32_t main(){
    gourav_27
    multi_tests
    test_cases{
        //solve();
       //outln(solve());
        // if(solve()) outln("YES");
        // else outln("NO");
    }
    rtn 0;
}