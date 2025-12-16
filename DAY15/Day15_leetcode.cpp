class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";

        vector<char> ch;
        vector<int> pos;

        for(int i =0; i < s.size(); i++){
            for(int j =0; j < vowels.size(); j++){
                if(s[i]  == vowels[j]){
                    ch.push_back(s[i]);
                    pos.push_back(i);
                }
            }
        }

        reverse(ch.begin(), ch.end());

        int j =0;
        for(int i =0; i < s.size(); i++){
            if(j < pos.size() && pos[j] == i){
                s[i] = ch[j];
                j++;
            }
        }

        return s;
    }
};