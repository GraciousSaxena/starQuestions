// NOTALLFL
#include <bits/stdc++.h> 
#define endl       "\n"
#define hell       1000000007 
#define pb         push_back
#define mp         make_pair
#define vi         vector<int>
#define vll         vector<ll>
#define all(x)     (x).begin(),(x).end()
#define F          first
#define S          second
#define forn(i,n)  for (ll i = 0; i < ll(n); ++i)
#define forn1(i,n) for (ll i = 1; i < ll(n); ++i)
#define IOS        ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define w(x)       int x; cin >> x; while (x--)

using namespace std;
typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.S < b.S;
}


int main(){
    IOS;
    w(t){
        int n, k;   cin>>n>>k;
        vector<int> arr(n);
        vector<int> flavf(k+1, 0);
        forn(i,n)   cin>>arr[i];
        int L=0, R=0;
        int distinctflav = 1;
        flavf[arr[0]] = 1;  
        int maxrange = 1;
        while(true){
            while(++R<n && distinctflav<k){
                if(flavf[arr[R]] == 0)  distinctflav++;
                flavf[arr[R]]++;
                if(distinctflav<k)  maxrange = max(maxrange, R-L+1);
            }
            if(R==n)    break;
            R--;
            while(L<=R && distinctflav == k){
                if(flavf[arr[L]] == 1) distinctflav--;
                flavf[arr[L]]--;
                L++;
            }
        }
        cout<<maxrange<<endl;
    }

    return 0;
}
