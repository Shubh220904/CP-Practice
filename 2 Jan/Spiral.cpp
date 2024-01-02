#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> res;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int count=0;

        int sr=0;  
        int er=row-1;  
        int sc=0;
        int ec=col-1;

        while(count<total){
            for(int i=sc;count<total && i<=ec;i++){
                res.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            for(int i=sr;count<total &&i<=er;i++){
                res.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            for(int i=ec;count<total && i>=sc;i--){
                res.push_back(matrix[er][i]);
                count++;
            }
            er--;
            for(int i=er;count<total && i>=sr;i--){
                res.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }
        return res;
        
    }
};