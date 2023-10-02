#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int celebrity(vector<vector<int>>&M, int n){
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(M[a][b]==1){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int celeb = s.top();
      /*
            0   1  2
        0 [[ 0 1 0],
        1 [0 0 0],
        2 [0 1 0]]
         celeb = 1
         */
        for(int i=0;i<n;i++){
            if((i!=celeb) &&(!M[i][celeb]) || M[celeb][i]){
                return -1;
            }
        }
        return celeb;
    }
};
int main() {

    Solution sol;

    vector<vector<int>>matrix={
        {0,1,0},
        {0,0,0},
        {0,1,0}
    };
    int n = matrix.size();
    int result = sol.celebrity(matrix,n);
    if(result ==-1){
        cout<<"No celebrity found."<<endl;
    }
    else {
        cout<<"Celebrity found at index "<<result<<endl;
    }
    return 0;
}