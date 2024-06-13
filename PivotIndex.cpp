//Return the index to of an array, whose left sum is equal to its right sum without including the element at that idx.
//Leetcode 724
#include<iostream> 
#include<vector> 
using namespace std;
int pivotIndex(vector<int>& nums) {
    //Making the prefix sum array
    vector<int> pre(nums.size());
    pre[0]=nums[0];
    for(int i=1;i<nums.size();i++)
        pre[i]= pre[i-1] + nums[i];

    for(int i=0;i<pre.size();i++){

        if(i!=0&&(pre[i-1]==(pre[pre.size()-1]-pre[i])))
            return i;
            
        else if(i==0&&(pre[pre.size()-1]-pre[0])==0)
                return 0;
    }

    return -1;

}
int main()
{
    vector<int> nums={1,7,3,6,5,6};
    cout<<pivotIndex(nums)<<endl;
}