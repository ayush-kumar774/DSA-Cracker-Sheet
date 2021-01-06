#include <bits/stdc++.h>
using namespace std ;
#define int long long

int unionOfArrays(int arr1[], int arr2[], int size1, int size2)
{
        set<int> s ;
        for (int i = 0 ; i < size1 ; i++)
        {
                s.insert(arr1[i]) ;
        }
        for (int i = 0 ; i < size2 ; i++)
        {
                s.insert(arr2[i]) ;
        }
        cout << "Union:- " ;
        for (auto x : s) cout << x << " " ; 
        cout << endl ;
        return ((int)(s.size())) ;
} // Execution time 1.45

int intersectionOfArrays(int arr1[] , int arr2[] , int size1 , int size2)
{
        set<int> s ;
        int count = 0 ;
        for (int i = 0 ; i < size1 ; i++)
        {
                s.insert(arr1[i]) ;
        }
        cout << "Intersection:- " ;
        for (int i = 0 ; i < size2 ; i++)
        {
                if (s.find(arr2[i]) != s.end()) {
                        count++ ;
                        cout << arr2[i] << " " ;
                }
        }
        cout << endl ;
        return count ;
}

int32_t main()
{
        int testcases = 1 ;
        cin >> testcases ;
        while (testcases--)
        {
                int n , m ;
                cin >> n >> m ;
                int arr1[n] , arr2[m] ;
                for (int i = 0 ; i < n ; i++)
                {
                        cin >> arr1[i] ;
                }
                for (int i = 0 ; i < m ; i++)
                {
                        cin >> arr2[i] ;
                }
                cout << unionOfArrays(arr1, arr2, n, m) << endl ;
                cout << intersectionOfArrays(arr1, arr2, n, m) << endl ;
        }
}
// << "Number of element after union of these two arrays:- " 
// << "Number of element after intersection of these two arrays:- " 