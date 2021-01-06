#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int kthSmallest(int *, int , int , int) ;

int32_t main()
{
        int testcases = 1 ;
        cin >> testcases ;
        while(testcases--)
        {
                int number_of_elements ;
                cin >> number_of_elements ;

                int arr[number_of_elements] ;
                for (int i = 0 ; i < number_of_elements ; i++)
                        cin >> arr[i] ;

                int k ;
                cin >> k ;
                cout << kthSmallest(arr, 0, number_of_elements - 1, k) << endl ;
        } 
        return 0 ;
}

//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
    sort(arr, arr + r + 1) ;
    return ( arr [ k - 1 ] ) ;
} // mine approach Time Duration:- 0.66. It is one of the best approach

// Another approaches are using min and max heap
