class Solution {
public:
    int furthestBuilding(vector<int>& H, int B, int L) 
    {
        int len = H.size() - 1;
        priority_queue<int> pq;
        for (int j = 0; j < len; j++) 
        {
            int diff = H[j+1] - H[j];
            if (diff > 0) {
                if (L) 
                    pq.push(-diff), L--;
                else if (!pq.empty() && diff > -pq.top())
                    pq.push(-diff), B += pq.top(), pq.pop();
                else 
                    B -= diff;
                if (B < 0) 
                    return j;
            }
        }
        return len;
    }
};