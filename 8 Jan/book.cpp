
#include<bits/stdc++.h>
using namespace std;

int cntStudent(vector<int>& arr, int pages){
    int st=1,pagestudent=0;
    for(int i=0;i<arr.size();i++){
        if(pagestudent+arr[i]<=pages){
            pagestudent+=arr[i];

        }
        else{
            st++;
            pagestudent=arr[i];
        }
    }
    return st;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>arr.size())return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        if(m<cntStudent(arr, mid)){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
        
    }
    return low;
}