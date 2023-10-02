#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>CalculateSpan(int price[], int n){
        vector<int>span(n);
        stack<int>st;
        st.push(0);
        span[0]=1;   //100, 80, 60, 70, 60, 75, 85
        for(int i=1;i<n;i++){
            int currPrice = price[i];
            while(!st.empty() && currPrice>=price[st.top()]){
                st.pop();
            }
            if(st.empty()){
                span[i]=i+1;
            }else{
                span[i]=i-st.top();
            }
            st.push(i);
        }
        return span;
    }
};
int main() {
    int price[] = {100,80,60,70,60,75,85}; // 1 1 1 2 4 6
    int n = sizeof(price)/sizeof(price[0]);
    Solution s;

    vector<int> span = s.CalculateSpan(price,n);

    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
    
    return 0;
}