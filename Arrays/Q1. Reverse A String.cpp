#include <bits/stdc++.h>
using namespace std;

string reverseWord (string str) 
{
        reverse(str.begin(), str.end()) ;
        return (str) ;
}

int32_t main()
{
        int testcases = 1 ;
        cin >> testcases ;
        while(testcases--)
        {
                string s ;
                cin >> s ;
                
                cout << reverseWord(s) << endl ;
        } 
        return 0 ;
}