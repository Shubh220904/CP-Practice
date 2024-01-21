
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int h = arr.size() - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            
             
            if (mid > 0 && mid < arr.size() - 1 && arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            
             
            if (mid < arr.size() - 1 && arr[mid] < arr[mid + 1]) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return -1;
    }
};