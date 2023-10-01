#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> nextGreaterElement(vector<long long> arr, int n)
    {
        stack<long long> st;
        vector<long long> res(n);
        for (int i = n - 1; i >= 0; i--)
        { // 1 2 4 3
            long long currVal = arr[i];
            while (!st.empty() && st.top() <= currVal)
            {
                st.pop();
            }
            res[i] = st.empty() ? -1 : st.top();
            st.push(currVal);
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<long long> arr = {1, 2, 4,3};
    int n = arr.size();
    vector<long long> result = s.nextGreaterElement(arr, n);
    for (long long val : result)
    {
        cout << val << " ";
    }
    return 0;
}