class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;

        int result = 0;
        for(int i = 0; i < operations.size(); i++){
            int sum =0;
            if(operations[i] != "D" && operations[i] != "C" && operations[i] != "+"){
                int temp = stoi(operations[i]);
                ans.push_back(temp);
            } else if(operations[i] == "C"){
                 ans.erase(ans.begin()+i);
            } else if(operations[i] == "D"){
                ans.push_back(2 * ans[ans.size()-1]);
            } else if(operations[i] == "+"){
                sum = ans[ans.size()-1] + ans[ans.size()-2];
                ans.push_back(sum);
            }
        }

        for(int i = 0; i < ans.size(); i++){
            result += ans[i];
        }
        return result;
    }
};