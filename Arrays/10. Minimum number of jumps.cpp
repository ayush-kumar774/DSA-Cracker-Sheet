#include <bits/stdc++.h>
using namespace std ;

int minJumps(int arr[] , int n)
{
        for(int i = 0 ; i < n ; i++)
        {
                
        }
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
