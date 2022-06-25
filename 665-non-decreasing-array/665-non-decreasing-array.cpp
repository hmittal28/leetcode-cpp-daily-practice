class Solution {
public:
    bool checkPossibility(vector<int>& N)
     {
        for (int x = 1, err = 0; x < N.size(); x++)
            if (N[x] < N[x-1])
                if (err++ || (x > 1 && x < N.size() - 1 && N[x-2] > N[x] && N[x+1] < N[x-1]))
                    return false;
        return true;
    }
};