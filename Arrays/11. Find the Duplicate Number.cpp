#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
        int findDuplicate(vector<int> &nums)
        {

                map<int, int> mp;

                int ans;

                for (int i = 0; i < nums.size(); i++)
                {
                        mp[nums[i]]++;
                }

                for (auto x : mp)
                {
                        if (x.second >= 2)
                        {
                                ans = x.first;
                                break;
                        }
                }

                return ans;
        }

        int printRepeating(vector<int> &nums)
        {
                int i;
                for (int i = 0; i < nums.size(); i++)
                {
                        if (nums[abs(nums[i])] >= 0)
                                nums[abs(nums[i])] = -nums[abs(nums[i])];
                        else
                                return abs(nums[i]);
                }
        }

        void printDuplicates(vector<int> &nums)
        {
                int n = nums.size() ;
                
                for (int i = 0; i < nums.size(); i++)
                {
                        nums[nums[i] % n] = nums[nums[i] % n] + n ;
                }

                for (int i = 0 ; i < n ; i++) 
                {
                        if (nums[i] >= n * 2)
                        {
                                cout << i << " " << endl ;
                        }
                }
        }
};

int main()
{
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &x : nums)
        {
                cin >> x;
        }
        Solution sol;
        //cout << sol.findDuplicate(nums) << endl ;
        cout << sol.printRepeating(nums) << endl;
        sol.printDuplicates(nums) ;
}