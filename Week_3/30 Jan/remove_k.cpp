#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int c=0;
        if(k==0){
           return num;
        }
        
        for(int i=0;i<num.size();i++)
        {
            while(k && !st.empty() && st.top()>num[i])
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
            if(num[i]=='0' && st.size()==1)
            st.pop();
        }
        string s="";
        while(k && !st.empty())
        {
            k--;
            st.pop();
        }
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        if(s.size()==0)
        return "0";
        return s;
    }
};