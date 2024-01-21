
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minAddToMakeValid(string s) {
        int forw=0,back=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') forw++;
            else{
                if(forw>0)forw--;
                else back++;
            } 

        }
        return abs(back+forw);
    }
};

 
 