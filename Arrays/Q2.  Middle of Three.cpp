#include <bits/stdc++.h>
using namespace std ;
#define int long long

class Solution{
  public:
    int middle(int A, int B, int C){
        int arr[] = {A, B, C} ;
        sort(arr, arr + 3) ;
        return arr[1] ;
    }
};

int32_t main()
{
        int testcases = 1 ;
        cin >> testcases ;
        while (testcases--)
        {
                int a , b, c ;
                cin >> a >> b >> c ;
                Solution obj ;
                cout << obj.middle(a, b, c) << endl ;
        }
        
        return 0;
}
