#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size(); 
        long long ans = 0;
        stack<int> st; 
        int mod = 1e9+7;
        for(int i = 0;i<=n;i++){
            while(st.size() && (i==n || arr[st.top()]>arr[i])){
                int j = st.top();
                st.pop();
                int k;
                if(st.empty()){
                    k=-1;
                }
                else{
                    k=st.top();
                }
                ans+=(long long) arr[j]*(i-j)*(j-k);
            }
            st.push(i);
        }
        return int(ans%mod);
    }
};

