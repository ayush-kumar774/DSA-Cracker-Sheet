#include <bits/stdc++.h>
using namespace std ;
#define int long long

int maxSubarraySum(int arr[], int n)
{
        int maxx = INT_MIN , maxx2 = 0 ;
        for (int i = 0 ; i < n ; i++)
        {
                maxx2 += arr[i] ;
                if (maxx < maxx2) {
                        maxx = maxx2 ;
                }
                if (maxx2 < 0) {
                        maxx2 = 0 ;
                }
        }
        return maxx ;
}

int32_t main()
{
        int testcases ;
        cin >> testcases ;
        while (testcases--)
        {
                int n ;
                cin >> n ;
                int arr[n] ;
                for (int i = 0 ; i < n ; i++)
                {
                        cin >> arr[i] ;
                }
                
                cout << maxSubarraySum(arr, n) << endl ; 
        }

        return 0 ;
}