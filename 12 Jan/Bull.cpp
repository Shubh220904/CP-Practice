
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0,cow=0;
        string res="";
        unordered_map<int,int> mp;
        // set<int>B;
        // set<int>A;
        int n=secret.size();
        for(int i=0;i<n;i++){
            int s=secret[i]-'0';
            int s2=guess[i]-'0';
            if(secret[i]==guess[i])
            bull++;
            mp[s2]++;
             
        }
        for(int i =0;i<secret.size();i++){
            int s1=secret[i]-'0';
            if(mp[s1]>0){
                cow++;
                mp[s1]--;
            }
        }

        string s=to_string(bull)+'A'+to_string(cow-bull)+'B';
        return s;

    }
};