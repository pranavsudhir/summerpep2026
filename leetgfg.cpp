//maxsum of sub array
//https://leetcode.com/problems/maximum-subarray/





//Reverse array in groups
//https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
// class Solution {
//   public:
//     void reverseInGroups(vector<int> &arr, int k) {
//         // code here
//         int n=arr.size();
//         for(int i=0;i<n;i+=k){
//             int start=i;
//             int end=min(i+k-1,n-1);
//             while(start<end){
//                 swap(arr[start++],arr[end--]);
//             }
//         }
//     }
// };

//max sum of subarr of size k
//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
// class Solution {
//   public:
//     int maxSubarraySum(vector<int>& arr, int k) {
//         // code here
//         int n=arr.size();
//        int currsum=0;
//         int maxsum=0;
//         for(int i=0;i<k;i++){
//             currsum+=arr[i];
//         }
//         maxsum=currsum;
//         for(int i=k;i<n;i++){
//             currsum=currsum-arr[i-k]+arr[i];
//             if(currsum>maxsum)maxsum=currsum;
//         }
//         return maxsum;
        
//     }
// };
