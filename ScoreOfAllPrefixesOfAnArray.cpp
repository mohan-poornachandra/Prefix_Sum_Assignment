//Leetcode 2640
#include<iostream> 
#include<vector>
using namespace std;

    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<int> Max(nums.size());
        vector<int> conver(nums.size());
        Max[0]=nums[0];
        conver[0] = 2*nums[0];
        vector<long long> score(nums.size());
        score[0]=(long long)conver[0];
        for(int i=1;i<nums.size();i++){
           Max[i] = max(Max[i-1],nums[i]);
           conver[i]= nums[i]+Max[i];
           score[i]= score[i-1]+(long long)conver[i];
        }
        return score;


    }

int main()
{
    vector<int> nums={2,3,7,5,10};
    vector<long long> score=findPrefixScore(nums);
    for(int i=0;i<score.size();i++)
        cout<<score[i]<<" ";
    cout<<endl;

}