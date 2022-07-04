class Solution {
public:
    int candy(vector<int>& ratings) {
        if( ratings.size() == 0) return 0;
        int count[ratings.size()];
        count[0] = 1;
        for(int i=1;i<ratings.size();i++){
            if(ratings[i] > ratings[i-1]){
                count[i] = count[i-1] + 1;
            }else{
                count[i] = 1;
            }
        }
        int res = count[ratings.size()-1];

        for(int j=ratings.size()-1; j >0;j--){
            if(ratings[j-1] > ratings[j] && count[j-1] <= count[j]){
                count[j-1] = count[j] + 1;
            }
            res += count[j-1];
        }

        return res;
    }
};