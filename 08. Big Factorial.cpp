// Day of the programmer
#include <bits/stdc++.h> 
#define endl      "\n"
#define hell      1000000007 
#define pb        push_back
#define mp        make_pair
#define vi        vector<ll int>
#define all(x)    (x).begin(),(x).end()
#define F         first
#define S         second
#define forn(i,n) for (int i = 0; i < int(n); ++i)
#define IOS       ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define w(x)      int x; cin >> x; while (x--)

using namespace std;
typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.S < b.S;
}

int main(){
    IOS;
    int carry=0, n;  cin>>n;
    vector<int> arr(200, 0);
    arr[0] = 1;
    int k=0;
    for(int i=2; i<=n; i++){
        for(int j=0; j<=k; j++){
            int prod = arr[j]*i + carry;
            carry = prod / 10;
            arr[j] = prod % 10;
        }
        while(carry){
            arr[++k] = carry % 10;
            carry /= 10;
        }
    }
    for(int i=k; i>=0; i--)  cout<<arr[i];
    return 0;
}
