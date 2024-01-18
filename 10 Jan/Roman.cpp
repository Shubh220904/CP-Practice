#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<string> ones = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        vector<string> tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        vector<string> hundreds = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC","CM"};
        vector<string> thousands = {"", "M", "MM", "MMM"};
        string res = "";
        res += thousands[num / 1000];
        res += hundreds[(num % 1000) / 100];
        res += tens[(num % 100) / 10];
        res += ones[num % 10];
        return res;
    }
};