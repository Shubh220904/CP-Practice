#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // bool all_equal(vector<int>& nums){
    //     bool eq=true;
    //     for(int i=1;i<nums.size();i++){
    //         if(nums[i]!=nums[i-1]){
    //             eq=false;
    //         }
    //     }
    //     return eq;
    // }
    int minMoves(vector<int>& nums) {
//         int cnt=0;
        
//         while(!all_equal(nums)){
//             sort(nums.begin(),nums.end());
//             for(int i=0;i<nums.size()-1;i++){
//                 nums[i]=nums[i]+1;
//             }
//             cnt++;
//         }
        
//         return cnt; =>  TLE
        int min_elem=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<min_elem){
                min_elem=nums[i];
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            res+=nums[i]-min_elem;
        }
        return res;
    }
};