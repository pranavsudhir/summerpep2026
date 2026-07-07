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


//subsequence
// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int i=0;
//         int j=0;
//         if(while i<s.length()&& j<t.length()){
//             if (s[i]==t[j]){
//                 i++;
//             }
//             j++;
//         }
//     }
// };






//vowel count
class Solution {
public:
    bool isVowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }

    int maxVowels(string s, int k) {
        int count = 0;
        for(int i = 0; i < k; i++){
            if(isVowel(s[i]))
                count++;
        }
        int ans = count;
        for(int i = k; i < s.length(); i++){
            if(isVowel(s[i]))
                count++;
            if(isVowel(s[i-k]))
                count--;
            ans = max(ans, count);
        }
        return ans;
    }
};


//intersection point of 2 LL

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempa = headA;
        ListNode *tempb = headB;
        while (tempa != tempb) {
            if (tempa==NULL)
                tempa=headB;
            else
                tempa=tempa->next;

            if (tempb==NULL)
                tempb=headA;
            else
                tempb=tempb->next;
        }
        return tempa;
    }
};

//CHECK CYCLE IN LL
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;   
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};