#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isValid(string s){
        stack<char>st;
        for(auto i:s){
            if(st.empty() || i=='(' || i=='{' || i=='['){
                st.push(i);
            }
            else{
                if((i==')' && st.top()!='(') || 
                (i=='}' && st.top()!='{') || 
                (i==']' && st.top()!='[')){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
int main() {
    Solution s;
    cout<<s.isValid("[((){}]");
    return 0;
}