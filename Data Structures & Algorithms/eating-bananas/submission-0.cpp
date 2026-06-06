class Solution {
public:
    long long canEat(vector<int>&piles,int speed){
        long long h = 0;
        for(int pile:piles){
            h += (pile + speed - 1)/speed;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());

        while(low <= high){
            int mid = low + (high - low)/2;

            if(canEat(piles , mid) <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};
