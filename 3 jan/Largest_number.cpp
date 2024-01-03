
#include<bits/stdc++.h>
using namespace std;


bool first_digit_compare(int a,int b){
    string A=to_string(a);
    string B=to_string(b);
    return A+B>=B+A;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        // vector<int>dig;
        // for(int i=0;i<n;i++){
        //     if(nums[i]/10 == 0){
        //          dig.push_back(nums[i]);
        //     }
        //     else{
        //         dig.push_back(nums[i]/10);
        //     }
        // }
        if(count(nums.begin(),nums.end(),0)==n){
            return "0";
        }
        sort(nums.begin(),nums.end(),first_digit_compare);
        string s=to_string(nums[0]);
        for(int i=1;i<n;i++){
            string temp=to_string(nums[i]);
            if(s+temp>temp+s){
                s=s+temp;
            }
            else{
                s=temp+s;
            }
        }

        return s;
    }
};