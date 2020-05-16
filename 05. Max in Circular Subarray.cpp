/*
         SEE KADANE'S ALGORITHM
         
EXPLANATION:-
EX 1:-
   A = [1, -2, 3, -2]
   max = 3   (This means max subarray sum for normal array)
   min = -2  (This means min subarray sum for normal array)
   sum = 0   (total array sum)
   Maximum Sum = 3 (max)

EX2:-
  A = [5, -3, 5]
  max = 7
  min  = -3
  sum = 7
  maximum subarray sum = 7 - (-3) = 10
  
EX3:-
   A = [3, -1, 2, -1]
   max = 4
   min = -1
   sum = 3
   maximum subarray sum  = sum - min = 3 - (-1) = 4

EX4:-
   A = [-2, -3, -1]
   max = -1
   min = -6
   sum = -6
   In this example, if we do (sum - min) then result is 0. but there is no subarray with sum 0.
   So, in this case we return max value. that is -1.
   
From above examples, 
we can understand that 
maximum sum is either max (we get using kadane's algo) or (sum - min).
There is a special case, if sum == min,
then maximum sum is max.

Let's develop an algorithm to solve this problem.
1. Find maximum subarray sum using kadane's algorithm (max) 
2. Find minimum subarray sum using kadane's algorithm (min)
3. Find total sum of the array (sum)
4. Now, if sum == min return max
5. Otherwise, return maximum ( max, sum - min )

IF YOU HAVE ANY DOUBTS, FEEL FREE TO ASK
IF YOU UNDERSTAND, DON'T FORGET TO UPVOTE.

Time :- O(N)
Space :- O(1)

*/
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        if(A.size() == 0)
            return 0;
        int sum = A[0];
        int maxSoFar = A[0];
        int minSoFar = A[0];
        int maxTotal = A[0];
        int minTotal = A[0];
        for(int i = 1; i< A.size();i++){
            maxSoFar = max(A[i], maxSoFar + A[i]);
            maxTotal = max(maxTotal, maxSoFar);
            
            minSoFar = min(A[i], minSoFar + A[i]);
            minTotal = min(minTotal, minSoFar);
            
            sum += A[i];
        }
        
        if(sum == minTotal)
            return maxTotal;
        
        return max(sum - minTotal, maxTotal);
    }
};
