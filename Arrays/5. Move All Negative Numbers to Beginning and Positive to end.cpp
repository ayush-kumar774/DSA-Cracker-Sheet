#include <bits/stdc++.h>
using namespace std ;
#define int long long

// void moveNegative (int arr[] , int n) 
//{
//         sort(arr, arr + n) ; // Order is not important
// } // Time Complexity :- O(N log N)

void moveNegative (int arr[], int n)
{
        int j = 0 ;
        for (int i = 0 ; i < n ;i++)
        {
                if (arr[i] < 0 )
                {
                        if (i != j) {
                                swap(arr[i], arr[j]) ;
                        }
                        j++;
                }
        }
} // Time Complexity :- O(N)

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

                moveNegative(arr , n) ;

                for (int i = 0 ; i < n ; i++)
                {
                        cout << arr[i] << " " ;
                }
                cout << endl ;
        }
        return 0 ;
        
}
