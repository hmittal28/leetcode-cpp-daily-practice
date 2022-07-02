class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc)
    {
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());
        int maxh = max(hc[0], h - hc.back()),
            maxv = max(vc[0], w - vc.back());
        for (int i = 1; i < hc.size(); i++)
            maxh = max(maxh, hc[i] - hc[i-1]);
        for (int j = 1; j < vc.size(); j++)
            maxv = max(maxv, vc[j] - vc[j-1]);
        return (int)((long)maxh * maxv % 1000000007);
    }
};