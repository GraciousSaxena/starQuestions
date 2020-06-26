/*
 * Complete the 'getTotalX' function below.

    You will be given two arrays of integers and asked to determine all integers that        satisfy the following two conditions:

    The elements of the first array are all factors of the integer being considered
    The integer being considered is a factor of all elements of the second array
 */

int gcd (int a, int b){
    int temp;
    while(b>0){
        temp = b;
        b = a % b;
        a = temp;
    } return a;
}

int gcd (vector<int> a){
    int result = a[0];
    for(int i=1; i<a.size(); i++){
        result = gcd(result, a[i]);
    } return result;
}

int lcm (int a, int b){
    return a * b / gcd(a,b);
}

int lcm (vector<int> a){
    int res = a[0];
    for(int i=1; i<a.size(); i++){
        res = lcm(res, a[i]);
    } return res;
}

int getTotalX(vector<int> a, vector<int> b) {
    int l = lcm(a), h = gcd(b), res=0;
    // cout<<"l="<<l<<"\th="<<h<<endl;
    for(int i=l; i<=h; i+=l){
        if(h%i == 0){
            res ++;
            // cout<<"i="<<i<<endl;
        }
    } return res;
    // returns the count of such numbers!
}
