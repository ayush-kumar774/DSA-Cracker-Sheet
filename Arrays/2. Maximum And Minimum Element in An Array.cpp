#include <bits/stdc++.h>
using namespace std ;
#define int long long

struct Pair
{
        int maxx = -9999999999 ;
        int minn = 99999999999 ;
};

Pair minMax(int arr[], int n)
{
        Pair res ;
        if (n == 1) {
                res.maxx = arr[0] ;
                res.minn = arr[0] ;
                return res ;
        }
        else {
                for (int i = 0 ; i < n ; i++)
                {
                        if (arr[i] > res.maxx) {
                                res.maxx = arr[i] ;
                        }
                        if (arr[i] < res.minn) {
                                res.minn = arr[i] ;
                        }
                }
                return res ;
        }
}

int32_t main()
{
        int n ;
        cin >> n ;
        int arr[n] ;
        for (int i = 0 ; i < n ; i++)
        {
                cin >> arr[i] ;
        }
        Pair res = minMax(arr, n) ;
        cout << "Maxx = " << res.maxx << " Min = " << res.minn << endl ;

        // Using C++ STL
        // sort(arr, arr + n) ;
        // cout << arr[0] << " " << arr[n - 1] << endl ;
        return 0 ;
}
