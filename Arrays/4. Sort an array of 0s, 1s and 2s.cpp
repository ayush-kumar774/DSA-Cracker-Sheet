#include <bits/stdc++.h>
using namespace std ;
#define int long long

void sort012(int [] , int) ;


int32_t main()
{
        int testcases = 1 ;
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

                sort012(arr , n) ;

                for (int i = 0 ; i < n ; i++)
                {
                        cout << arr[i] << " " ;
                }
                cout << endl ;
        }
        return 0 ;
        
}

// Mine Approach Time 0.17 
// void sort012(int arr[], int n)
// {
//         sort(arr, arr + n) ;
// }

void sort012(int arr[], int n)
{
        int cnt0 = 0 , cnt1 = 0 , cnt2 = 0 ;
        for (int i = 0 ; i < n ; i++)
        {
                if (arr[i] == 0) cnt0++ ;
                else if (arr[i] == 1) cnt1++ ;
                else cnt2++ ;
        }
        for (int i = 0 ; i < n ; i++)
        {
                arr[i] = 0 ;
        }

        for (int i = cnt0 ; i < (cnt1 + cnt0); i++)
        {
                arr[i] = 1 ;
        }
        for (int i = (cnt1 + cnt0) ; i < (cnt1 + cnt0 + cnt2); i++)
        {
                arr[i] = 2 ;
        }
} // Time 0.11

// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#