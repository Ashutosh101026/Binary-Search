// Brute Force
class Solution {
public:
    int mySqrt(int x) {
        for(long long int i=0;i<=x;i++){
            if(i*i==x) return i;
            if(i*i>x) return i-1;
        }
        return 69;
        
    }
};

//another option without long long int
class Solution {
public:
    int mySqrt(int x) {
        for(int i=1;i<=x;i++){
            if(i==x/i) return i;
            if(i>x/i) return i-1;
        }
        return 0;
        
    }
};
// TC => O(sqrt(n))


// Binary Search Approach
class Solution {
public:
    int mySqrt(int n) {
        if(n==0) return 0;
        int lo=1,hi=n;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid>n/mid) hi=mid-1;
            else if(mid<n/mid) lo=mid+1;
            else return mid;
        }
        return hi;
        
    }
};
// TC : O(log(n))

