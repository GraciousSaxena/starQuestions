// You are given a sequence of points and the order in which you need to cover the points.
// Give the minimum number of steps in which you can achieve it.
// You start from the first point.

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
  int x,y,sum=0;
  for(int i =1; i<A.size();i++) {
  x=abs(A[i]-A[i-1]);
  y=abs(B[i]-B[i-1]);
  sum+=max(x,y);
  }
  return sum;
}
