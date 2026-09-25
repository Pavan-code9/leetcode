class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        int n=tickets.size();
        for(int i=0;i<n;i++){
            q.push({tickets[i],i});
        }
        int time=0;
        while(!q.empty()){
            auto front=q.front();
            q.pop();
            front.first--;
            time++;
            if(front.first==0){
                if(front.second==k){
                    return time;
                }
            }else{
                q.push(front);
            }
        }
        return time;
    }
};