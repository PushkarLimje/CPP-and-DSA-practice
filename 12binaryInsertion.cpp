#include <iostream>
#include <vector>
using namespace std;

int binaryIndex(vector<int>& nums, int target){
    int start = 0;
    int end = nums.size()-1;
    int ans ;
    while (start <= end )
    {
        int mid = start + (end - start )/2 ;
        if (nums[mid] == target) return mid ;
        
        if (nums[mid]> target)
        {
            end = mid - 1;

        } else {
            start = mid + 1 ;
            ans = start ;
        }
        
    }
    return (start );
}

int main()
{
    vector<int> nums = {1,3,5,6};
    int target = 2  ;
    std::cout << "answer : "<< binaryIndex(nums , target) << std::endl;
    return 0;
}