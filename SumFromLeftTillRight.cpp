//In a given array, return the sum of elements from left till right including those elements.
//Leetcode 303
#include<iostream>
#include<vector>
using namespace std;

class NumArray {
private: 
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        // Initialize prefix sum array with an extra space for 0 at the beginning
        prefix.resize(nums.size());
        // Calculate the prefix sum
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            prefix[i]= prefix[i-1]+nums[i];
    }
    
    int sumRange(int left, int right) {
        if(left!=0)
            return (prefix[right]-prefix[left-1]);
        else 
            return (prefix[right]);
        }
};
int main()
{
    NumArray* obj;

}