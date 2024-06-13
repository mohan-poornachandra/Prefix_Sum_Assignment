//Leetcode 1109
#include<iostream> 
#include<vector>
using namespace std;

    vector<int> corpFlightBookings(vector<vector<int>>& booking, int n) {
        vector<int> ans(n);
        for(int i=0;i<booking.size();i++){
           
                for(int j=booking[i][0]-1;j<booking[i][1];j++)
                    ans[j] += booking[i][2];
        }
        return ans;
    }

int main()
{
    vector<vector<int>> bookings={{1,2,10},{2,3,20},{2,5,25}};
    int n=5;
    vector<int> ans=corpFlightBookings(bookings,n);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}