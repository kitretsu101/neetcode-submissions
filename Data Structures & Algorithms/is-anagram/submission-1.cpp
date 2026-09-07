class Solution {
public:
    bool isAnagram(string s, string t) {
        int count=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){
            if(s[i]==t[i]){
                count++;
            }
        }

        if(count==s.size() && count == t.size()){
            return true;
        } else{
            return false;
        }
    }
};
