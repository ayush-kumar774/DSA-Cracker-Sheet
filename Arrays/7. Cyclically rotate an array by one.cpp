#include <bits/stdc++.h>
#define int long long
using namespace std ;

void rotate(int arr[], int n)
{
        int x = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1]; 
        arr[0] = x;
} // editorial 

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
                        cin >> arr[(i + 1 ) % n]  ;
                }
                for (int i = 0 ; i < n ; i++) {
                        cout << arr[i] << " " ;
                }
                cout << endl ;
        }
        
} // Execution Time:0.01
