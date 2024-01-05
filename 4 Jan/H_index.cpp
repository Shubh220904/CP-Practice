#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(), c.end());
        int n = c.size();
        int max_idx = 0;
        for(int i = 0; i < n; i++) {
            if(c[i] >= n - i) {
                max_idx = max(max_idx, n - i);
            }
        }
        return max_idx;
    }
};