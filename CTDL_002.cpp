#include<bits/stdc++.h>
using namespace std;
//Code designed by https://linktr.ee/hu2hoang
#define ll long long
#define pb push_back
#define fi first
#define se second
#define sz(a) int((a).size())
#define ms(s,n) memset(s,n,sizeof(s))
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define tolowerr(str) transform(str.begin(),str.end(),str.begin(),::tolower);
#define toupperr(str) transform(str.begin(),str.end(),str.begin(),::toupper);
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
#define exp(vi) for(int x:vi) cout<<x<<' ';
#define sovi(vi) sort(vi.begin(),vi.end())
#define mcd(n) vector<int> mcd(n); partial_sum(vi.begin(),vi.end(),mcd.begin());//mcd[r-1]-mcd[l-2]
#define mav(vi) *max_element(vi.begin(),vi.end())
#define acm(vi) accumulate(vi.begin(),vi.end(),0)
inline ll lcm(ll a,ll b){return (a*b)/__gcd(a,b);}
const int mod=1e9+7;
int n,k,cnt;
vector<int> a,b;
void solve(){
	int sum=0;
	fio(i,0,n){
		sum+=a[i]*b[i];
	}
	if(sum==k){
		fio(i,0,n) if(b[i]) cout<<a[i]<<" ";
		cout<<endl;
		cnt++;
	}
}
void Try(int i){
	for(int j=0;j<=1;++j){
		b[i]=j;
		if(i==n-1) solve();
		else Try(i+1);
	}
}

int main(){
		cin>>n>>k;
		a.resize(n);
		b.resize(n);
		for(int &i:a) cin>>i;
		Try(0);
		cout<<cnt;
		cout<<endl;
	return 0;
}
