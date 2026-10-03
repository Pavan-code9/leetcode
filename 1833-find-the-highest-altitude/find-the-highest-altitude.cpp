class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int al=0;
        int maxal=0;
        for(int g:gain){
            al+=g;
            maxal=max(maxal,al);
        }
        return maxal;
    }
};