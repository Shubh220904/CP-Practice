#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(nums1.begin(),nums1.end());
        v.insert(v.end(),nums2.begin(),nums2.end());
        sort(v.begin(),v.end());
        if(v.size()%2==0) {
            return (float)((v[v.size()/2] + v[v.size()/2-1])/2.0);
        }
        else return v[v.size()/2];
    }
};