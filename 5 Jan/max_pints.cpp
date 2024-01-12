
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
        
     
    int maxPoints(vector<vector<int>>& points) {
        int max_elem=1;
        double slope;
        
        for(int i=0;i<points.size();i++){
            map<double,int>mp;
            for(int j=i+1;j<points.size();j++){
                
                slope=double(points[j][1]-points[i][1])/double(points[j][0]-points[i][0]);
                if((points[j][1]-points[i][1]<0)&&(points[j][0]-points[i][0]==0)){
                    mp[abs(slope)]++;
                }
                else mp[slope]++;
                
                 
                
            }
            int t=0;
            for ( auto i: mp)
            t=max(t,i.second+1);
            max_elem=max(max_elem,t);
        }
        return max_elem;
         
        
    }
};