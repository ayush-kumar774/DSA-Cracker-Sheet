// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast                              \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);
#define endl '\n'
#define sz(v) ((int)((v).size()))
#define all(v) ((v).begin()), ((v).end())
#define allr(v) ((v).rbegin()), ((v).rend())
#define vectorInt vector<int>
#define vectorStr vector<string>
#define vectorDo vector<double>
#define mapInt map<int, int>
#define mapChar map<char, int>
#define mapStr map<string, int>
#define pb push_back
const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int LINF = 1e18;

class Solution
{
public:
        int maxProfit(vector<int> &prices)
        {
                int profit = 0;
                int buy = prices[0] ;
                for (int i = 1 ; i < prices.size() ; i++)
                {
                        if(prices[i] < buy)
                        {
                                buy = prices[i] ;
                        }
                        profit += max( (int)0 , (prices[i] - buy)) ; 
                }
                return profit;
        }
};

void solve()
{
        Solution sol;
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
                cin >> x;
        int profit = sol.maxProfit(v);
        cout << profit << endl;
}

int32_t main()
{
        // #ifndef ONLINE_JUDGE
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif
        fast;
        int testcases = 1;
        cin >> testcases;
        while (testcases--)
        {
                solve();
        }
        return 0;
}
/*  CODED BY:-
         ___________________________________
        |                       ___         |
        |  /\   /\  \ /  |  |  |___   |__|  |
        | /~~\ /~~\  |   |__|   ___|  |  |  |
        |___________________________________|
*/
