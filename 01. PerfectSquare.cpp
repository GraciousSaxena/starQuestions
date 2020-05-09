bool isPerfectSquare(int num) {
    // if(num == 1)
    //     return true;
    // for(int i=1; i<=num/2; i++){
    //     if((num%i == 0) && (num/i == i))
    //         return true;
    // }
    // return false;


    // long double sr = sqrt(num); 
    // return ((sr - floor(sr)) == 0); 


    // if(num == 1)
    //     return true;
    // int l=0,r=num;
    // while(l<=r){
    //     long long mid = (l+r)>>1;
    //     long long midsq = mid*mid;
    //     if(midsq > num)
    //         r = mid-1;
    //     else if(midsq < num)
    //         l = mid+1;
    //     else
    //         return true;
    // }
    // return false;

//         BEST METHOD
//         A square is 1+3+5+7+9................(2n+1)
    int sum=1;
    while(num>0){
        num-=sum;
        if(num == 0)
            return true;
        sum += 2;
    }
    return false;
}

int main(){
  int n;  cin>>n;
  bool ok = isPerfectSquare(n);
  if(ok)
    cout<<"YES!"<<endl;
  else
    cout<<"NO"<<endl;
}
  
