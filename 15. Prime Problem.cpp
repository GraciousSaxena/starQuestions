
#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using ull = unsigned long long;
using vll = vector<ll>;
using vi = vector<int>;
using vchar = vector<char>;
using vstr = vector<string>;
using pll =  pair<ll,ll>;

const ll mod = 1000000007;
const ll inf = 1000000000000000;


#define pi acos(-1)
#define pb push_back
#define mp make_pair
#define test int TEST;cin>>TEST;while(TEST--)
#define all(x) x.begin(),x.end()
#define vrevsort(x) sort(x.rbegin(),x.rend())
#define opy cout<<"YES\n"
#define opn cout<<"NO\n"
#define NL cout<<'\n'
#define SP cout<<' '

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}
#define deb(x) cerr << #x << " = " << x << endl;

vector <bool> sieve(int n){
	//to get prime numbers <=n O(n*log(log(n)))
	vector<bool> a(n+1,1);
	for(int i=2;i*i<=n;i++){
		if(a[i]){
			for(int j=i*i;j<=n;j+=i){
				a[j]=0;
			}
		}
	}
	return a;
}
void solve(vector<bool> s){
int n;
cin>>n;
int count=0;
for(int i=2;i<1299827;i++){
	if(s[i]){
		cout<<i<<"\n";
		count++;
	}
	if(count==n) break;
}
}
			
	

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    vector<bool> s=sieve(1299827);
    solve(s);cout<<'\n';
	//solve();
	
}

