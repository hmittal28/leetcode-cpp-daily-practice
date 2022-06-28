class Solution {
public:
    int minDeletions(string s) {
        int freq[26];
        memset(freq,0,sizeof(freq));
        int n = s.length();
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        vector<int> frequencies;
        for(auto i:freq){
            if(i>0){
                frequencies.push_back(i);
            }
        }
        int deletions = 0;
        map<int,int> visited;
        for(int j=0;j<frequencies.size();j++){
            while(visited[frequencies[j]]){
                frequencies[j]--;
                deletions++;
            }
            if(frequencies[j]!=0){
            visited[frequencies[j]]++;
            }
        }
        return deletions;
    }
};