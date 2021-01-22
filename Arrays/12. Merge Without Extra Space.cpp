#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
        int nextGap(int gap)
        {
                if (gap <= 1)
                        return 0;
                return (gap / 2) + (gap % 2);
        }
        void merge(int arr1[], int arr2[], int n, int m)
        {
                int i, j, gap = n + m;
                for (gap = nextGap(gap); gap > 0; gap = nextGap(gap))
                {
                        for (i = 0; i + gap < n; i++)
                        {
                                if (arr1[i] > arr1[i + gap])
                                        swap(arr1[i], arr1[i + gap]);
                        }
                        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++)
                        {        
                                if (arr1[i] > arr2[j])
                                        swap(arr1[i], arr2[j]);
                        }
                        if (j < m) 
                        {
                                for (j = 0; j + gap < m; j++)
                                {
                                        if (arr2[j] > arr2[j + gap])
                                                swap(arr2[j], arr2[j + gap]);
                                }
                        }
                }
        }
        void mergeYoutubeTLE(int arr1[], int arr2[], int n, int m)
        {
                for (int i = m - 1; i >= 0; i--)
                {
                        int j;
                        int last = arr1[n - 1];
                        for (j = n - 2; j >= 0 && arr1[j] > arr2[i]; j--)
                        {
                                arr1[j + 1] = arr1[j];
                        }
                        if (j != n - 2 || last > arr2[i])
                        {
                                arr1[j + 1] = arr2[i];
                                arr2[i] = last;
                        }
                }
        }
        void mergeTLE(int arr1[], int arr2[], int n, int m)
        {
                int i = 0, j = 0;
                for (int k = 0; k < n;)
                {
                        if (arr1[i] < arr2[j])
                        {
                                i++;
                                k++;
                        }
                        else
                        {
                                swap(arr1[i], arr2[j]);
                                i++;
                                k++;
                                sort(arr2, arr2 + m);
                        }
                }
        }
};

int main()
{
        int testcases;
        cin >> testcases;
        while (testcases--)
        {
                int n, m;
                cin >> n >> m;
                int arr1[n], arr2[m];
                for (int i = 0; i < n; i++)
                        cin >> arr1[i];
                for (int i = 0; i < m; i++)
                        cin >> arr2[i];
                Solution sol;
                sol.merge(arr1, arr2, n, m);
                for (int i = 0; i < n; i++)
                        cout << arr1[i] << " ";
                cout << endl;
                for (int i = 0; i < m; i++)
                        cout << arr2[i] << " ";
                cout << endl;
        }
}