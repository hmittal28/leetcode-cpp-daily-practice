class Solution {
public:
    int maxScore(vector<int>& C, int K) {
        int total = 0;
        for (int x = 0; x < K; x++)
            total += C[x];
        int maxa= total;
        for (int x = K - 1, j = C.size() - 1; ~x; x--, j--)
        {
            total += C[j] - C[x];
            maxa = max(maxa, total);
        }
        return maxa;
    }
};