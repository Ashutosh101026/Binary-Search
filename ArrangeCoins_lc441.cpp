// brute force
class Solution {
public:
    int arrangeCoins(int n) {
        long long int k=1;
        while(k*(k+1)/2<=n){
            k++;
        }
        return k-1;
        
    }
};
// binary search
class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 1;
        long long high = n;
        long long ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            long long coins = mid * (mid + 1) / 2;

            if (coins <= n) {
                // mid rows can be completed
                ans = mid;

                // Try to make more rows
                low = mid + 1;
            }
            else {
                // mid rows need too many coins
                high = mid - 1;
            }
        }

        return ans;
    }
};