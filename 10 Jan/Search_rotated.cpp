
#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int occur=count(nums.begin(),nums.end(),target);
        if(occur){
            return true;
        }
        return false;
    }
};