#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
        static bool compareVector ( const vector <int> &first , const vector <int> &second )
        {
                return first[0] < second[0] ;
        }

        vector<vector<int>> merge2(vector<vector<int>> &intervals)
        {
                sort(intervals.begin(), intervals.end(), compareVector) ;

                vector < vector < int > > res ;

                for (vector<int> interval : intervals)
                {
                        if (res.size() == 0 || res.back()[1] < interval[0]) {
                                res.push_back(interval) ;
                        }
                        else {
                                res.back()[1] = max(res.back()[1], interval[1]) ;
                        }
                }

                return res ;
        }

        vector<vector<int>> merge(vector<vector<int>> &intervals)
        {
                sort(intervals.begin() , intervals.end(), compareVector) ;

                int index = 0 ;
                vector < vector<int> > res ;

                while (index < intervals.size())
                {
                        if (index == intervals.size() - 1 or intervals[index][1] < intervals[index + 1][0])
                        {
                                res.push_back(intervals[index]) ;
                                index++ ;
                        }
                        else
                        {
                                int bound = index + 1 ;
                                intervals[bound][0] = intervals[index][0] ;
                                intervals[bound][1] = max(intervals[bound][1] , intervals[index][1]) ;
                                index = bound ;
                        }
                        
                }
                return res ;
        }
};

int main()
{
        int row, column = 2 ;
        cin >> row ;
        vector < vector <int> > intervals(row, vector<int> (column, 0)) , answer ;
        for (int i = 0 ; i < row ; i++)
        {
                for (int j = 0 ; j < column ; j++)
                {
                        cin >> intervals[i][j] ;
                }
        }
        Solution sol ;
        answer = sol.merge2(intervals) ;
        for (int i = 0 ; i < answer.size() ; i++)
        {
                for (int j = 0 ; j < answer[i].size() ; j++)
                {
                        cout << answer[i][j] << " " ;
                }
                cout << endl ;
        }
}