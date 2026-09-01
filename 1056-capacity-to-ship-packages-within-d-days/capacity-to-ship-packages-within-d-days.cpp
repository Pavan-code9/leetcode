class Solution {
public:
    bool canship(vector<int>& weights, int dayshave, long long capacity) {
        int daysneeded = 1;
        long long currentweightsum = 0;

        for (int weight : weights) {
            if (currentweightsum + weight <= capacity) {
                currentweightsum += weight;
            } else {
                daysneeded++;
                currentweightsum = weight;
            }
        }

        return daysneeded <= dayshave;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        long long low = *max_element(weights.begin(), weights.end());

        long long high = 0;
        for (int w : weights) {
            high += w;
        }

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (canship(weights, days, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};