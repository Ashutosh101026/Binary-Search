class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int lo =0,hi=n-1;
        if(target<arr[0]) return 0;
        if(target>arr[n-1]) return n;
        while(lo<=hi){
            int mid = (lo +hi)/2;
            if(arr[mid]>target) hi=mid-1;
            else if(arr[mid]<target) lo=mid+1;
            else{
                return mid;
            }


        }
        return lo;
        
    }
};