#include <bits/stdc++.h>
using namespace std ;

int minJumps(int arr[] , int n)
{
        if (arr[0] == 0) return -1 ;
        
        if (n == 1) return 0 ;

        int steps = arr[0] ;
        int maxRange = arr[0] ;
        int jumps = 1 ;

        for (int i = 1 ; i < n ; i++)
        {
                if (i == n - 1) {
                        return jumps ;
                }

                maxRange = max(maxRange, i + arr[i]) ;
                steps-- ;

                if (steps == 0)
                {
                        jumps++ ;

                        if (i >= maxRange) {
                                return -1 ;
                        }

                        steps = maxRange - i;
                }
        }
        return -1 ;
}

int main()
{
        int testcases ;
        cin >> testcases ;
        while(testcases--)
        {
                int n ;
                cin >> n ;
                int arr[n] ;
                for (int i = 0 ; i < n ; i++)
                {
                        cin >> arr[i] ;
                }
                cout << minJumps(arr, n) << endl ;
        }
        return 0 ;
}
