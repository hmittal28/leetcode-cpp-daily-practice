class Solution {
public:
    int minPartitions(string n) {
        int s=n.length();
        int p=0;
        for(auto i:n)
        {
            int x = i-'0';
            p=max(x,p);
        }
        return p;
    }
};