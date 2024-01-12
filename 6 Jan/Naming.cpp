#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string>s(ideas.begin(),ideas.end());
        int n=ideas.size();
        long long c=0;
        vector<vector<long long>>v(26,vector<long long>(26,0));
        
        for(int i=0;i<n;i++)
        {
            string s1=ideas[i];
            int k=s1[0]-'a';
            for(int i=0;i<26;i++)
            {
                s1[0]=char(i+'a');
                if(!s.count(s1)) v[k][i]++;
            }
        }
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<26;j++)
            {   cout<<v[i][j]<<"|";
                if(i!=j)
                {
                    c+=(v[i][j]*v[j][i]);
                }
            }
            cout<<endl;
        }
        return c;
    }
};