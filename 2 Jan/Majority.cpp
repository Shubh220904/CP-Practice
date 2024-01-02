#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxoccur=1;
        int maxElem=nums[0];
        int curr=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                cnt++;
            }
            else{
                if(maxoccur<cnt){
                    maxoccur=cnt;
                    cnt=1;
                    maxElem=nums[i-1];
                }
                
            }
        }
        if(maxoccur<cnt){
            maxoccur=cnt;
            cnt=1;
            maxElem=nums[nums.size()-1];
        }

        return maxElem;
        
    }
};