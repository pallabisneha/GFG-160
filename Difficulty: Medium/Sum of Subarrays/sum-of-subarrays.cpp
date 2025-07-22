class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int sum=0;
        
        int n=arr.size();
        for(int i=0; i<n;i++)
        {
         
          sum=sum+arr[i]*(i+1)*(n-i);
        }
        return sum;
    }
    
};