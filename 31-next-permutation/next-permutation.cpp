class Solution {
public:
    void nextPermutation(vector<int>& A) {
    
    //1st step : find the Pivot
    
    int pivot = -1, n = A.size();

    for(int i=n-2; i>=0; i--) {
        if(A[i] < A[i+1]) {
            pivot = i;
            break;
        }
    } 
    if(pivot == -1) {
      reverse(A.begin(), A.end()); //in place changes
      return;
    }

    //2nd step : next large element
    for(int i =n-1; i>pivot; i--) {
        if(A[i] > A[pivot]) {
            swap(A[i], A[pivot]);
            break;
        }
    } 

      //3rd step : reverse (pivot+1 to n-1)
      int i = pivot+1, j = n-1;
      while(i <= j) {
       swap(A[i++], A[j--]);
    }
  }
};