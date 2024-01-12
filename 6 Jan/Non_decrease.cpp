#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        int max_till=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                if(i>1){
                    if(nums[i]<max_till){
                        nums[i]=nums[i-1];
                        max_till=nums[i];
                        cnt++;
                    }
                    else{
                        nums[i-1]=nums[i];
                        max_till=nums[i];
                        cnt++;
                    }
                }
                else{
                    cnt++;
                    nums[i-1]=nums[i];
                    max_till=nums[i];
                }
                 
            }
            else{
                if(i>1)  max_till=max(max_till,nums[i-1]);
            }
             
        }
        if(cnt<=1){
            return true;
        }
        else{
            return false;
        }
    }
};