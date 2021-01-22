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

int merge(vector<int> arr, vector<int> temp, int left, int mid, int right)
{
        int i, j, k;
        int inv_count = 0;

        i = left; 
        j = mid;  
        k = left; 
        while ((i <= mid - 1) && (j <= right))
        {
                if (arr[i] <= arr[j])
                {
                        temp[k++] = arr[i++];
                }
                else
                {
                        temp[k++] = arr[j++];
                        inv_count = inv_count + (mid - i);
                }
        }
        while (i <= mid - 1)
                temp[k++] = arr[i++];
        while (j <= right)
                temp[k++] = arr[j++];
        for (i = left; i <= right; i++)
                arr[i] = temp[i];

        return inv_count;
}


int _mergeSort(vector<int> v, vector<int> temp,int left, int right)
{
        int mid, inv_count = 0;
        if (right > left)
        {
                mid = (right + left) / 2;
                inv_count += _mergeSort(v, temp, left, mid);
                inv_count += _mergeSort(v, temp, mid + 1, right);
                inv_count += merge(v, temp, left,mid + 1, right);
        }
        return inv_count;
}


int mergeSort(vector<int> v, int n)
{
        vector<int> temp(n) ;
        return _mergeSort(v, temp, 0, n - 1);
}


void solve()
{
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
                cin >> x;
        int inversion_count = mergeSort(v, n);
        cout << inversion_count << endl;
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
