
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128, 0);
        for (char c : t) {
            freq[c]++;
        }

        int start = 0, end = 0, counter = t.size(), minLen = INT_MAX, minStart = 0;

        while (end < s.size()) {
            char currentChar = s[end];
            if (freq[currentChar] > 0) {
                counter--;
            }
            freq[currentChar]--;
            end++;

            while (counter == 0) {
                if (minLen > end - start) {
                    minLen = end - start;
                    minStart = start;
                }

                char chars = s[start];
                freq[chars]++;
                if (freq[chars] > 0) {
                    counter++;
                }

                start++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};