class Solution {
public:
    vector<int> arr;
    int largestComponentSize(vector<int>& A) {
        int maxVal = *max_element(A.begin(), A.end());
        arr.resize(maxVal+1);
        for(int i=0; i<=maxVal; i++)    arr[i] = i;
        
        // cout<<"org  "<<":: ";
        // for(int a : arr)    cout<<a<<" ";
        // cout<<endl;
        for(int a : A){
            int sq = sqrt(a);
            // cout<<sq<<endl;
            for(int i=2; i<=sq; i++){
                if(a%i == 0){
                    Union(a, i);
                    Union(a, a/i);
                    // cout<<"a = "<<a<<":: ";
                    // for(int a : arr)    cout<<a<<" ";
                    // cout<<endl;
                }
            }
        }
        maxVal = 1;
        unordered_map<int, int> m;
        for(int a : A){
            int parent = find(a);
            m[parent]++;
            maxVal = max(maxVal, m[parent]);
        }
        return maxVal;
    }
    int find(int i){
        if(i != arr[i])
            arr[i] = find(arr[i]);
        return arr[i];
    }
    void Union(int x, int y){
        arr[find(x)] = arr[find(y)];
    }
};
