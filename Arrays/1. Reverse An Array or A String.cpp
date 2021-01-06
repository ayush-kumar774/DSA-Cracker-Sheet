#include <bits/stdc++.h>
using namespace std ;
#define int long long

void itr_ReverseArray(int arr[], int start , int end) 
{
        while (start < end)
        {
                int temp = arr[start] ;
                arr[start] = arr[end] ;
                arr[end] = temp ;
                start++ ;
                end-- ;
        }
}

void itr_ReverseString(char mat[] , int start , int end) 
{
        while (start < end)
        {
                char temp = mat[start] ;
                mat[start] = mat[end] ;
                mat[end] = temp ;
                start++ ;
                end-- ;
        }
}

void recur_ReverseArray(int arr[], int start , int end) 
{
        if (start >= end) return ;

        int temp = arr[start] ;
        arr[start] = arr[end] ;
        arr[end] = temp ;

        recur_ReverseArray(arr, start + 1, end - 1) ;
}

void recur_ReverseString(char arr[], int start , int end) 
{
        if (start >= end) return ;

        char temp = arr[start] ;
        arr[start] = arr[end] ;
        arr[end] = temp ;
        
        recur_ReverseString(arr, start + 1, end - 1) ;
}


int32_t main()
{
        int n ;
        cin >> n ;
        int arr[n] ;
        char str[n] ;
        for (int i = 0 ; i < n ; i++) {
                cin >> arr[i] ;
        }
        cin >> str ;

        recur_ReverseArray(arr, 0, n - 1) ;
        recur_ReverseString(str, 0, n - 1) ;

        for (int i = 0 ; i < n ; i++) 
        {
                cout << arr[i] << " " ;
        }
        cout << endl ;
        cout << str << endl ;


        // Using C++ STL
        // reverse(arr, arr + n) ;
        // reverse(str, str + n) ;

        // for (int i = 0 ; i < n ; i++) 
        // {
        //         cout << arr[i] << " " ;
        // }
        // cout << endl ;
        // cout << str << endl ;
        
        return 0;
}
