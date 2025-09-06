//88. Merge Sorted Array
// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

// Input: nums1 = [0], m = 0, nums2 = [1], n = 1
// Output: [1]
// Explanation: The arrays we are merging are [] and [1].
// The result of the merge is [1].
// Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.

#include <iostream>
#include<vector>

using namespace std;

vector<int> check(vector<int>& nums,  int validSize){
    vector<int> ans ;
    
    for (int i = 0; i < validSize; i++)
    {        
        ans.push_back(nums[i]);                      
    }
    return ans ;

}

vector<int> bubbleSort(vector<int>& nums){
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwapped = false ;
        for (int j = 0; j < (n - i -1); j++)
        {
            if (nums[j] > nums[j+1])
                {
                    swap(nums[j] , nums[j+1]);
                    isSwapped =true;
                }
        }       
        if (!isSwapped)
        {
            break;
        }
               
    }
    return nums;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    vector<int> ans1 = check(nums1,m);
    vector<int> ans2 = check(nums2,n);

    int ans1Size = ans1.size();
    int ans2Size = ans2.size();

    nums1.clear();

    // First copy ans1
    for (int i = 0; i < ans1Size; i++) {
        nums1.push_back(ans1[i]);
    }

    // Then copy ans2
    for (int i = 0; i < ans2Size; i++) {
        nums1.push_back(ans2[i]);
    }
  
    bubbleSort(nums1);
}   

int main()
{
    vector<int> nums1 = {-1,0,0,3,3,3,0,0,0};
    vector<int> nums2 = {1,2,2};
    int m = 6, n = 3;  // first 6 in nums1 are valid, nums2 has 3 elements

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}