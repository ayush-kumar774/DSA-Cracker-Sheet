#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
        void nextPermutation(vector<int> &nums)
        {
                next_permutation(nums.begin(), nums.end()) ;
                for (auto x : nums) cout << x << " " ;
        }
};

int main()
{
        int n ;
        cin >> n ;
        vector <int> nums(n) ;
        for (auto &x : nums)
        {
                cin >> x ;
        }
        Solution sol ;
        sol.nextPermutation(nums) ;
        return 0 ;
}