class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
      set<int> ans;
      vector<int> result;
      int n1 = nums1.size();
      int n2 = nums2.size();
      int n3 = nums3.size();
      int search =0, count =0;

      for(int i = 0; i < n1; i++){
        search = nums1[i];
        count = 1;

        for(int j =0; j < n2; j++){
            if(nums2[j] == search) count++;
            if(count >= 2){ 
                ans.insert(search);
                break;
            }
        }
      }

      for(int i = 0; i < n1; i++){
        search = nums1[i];
        count = 1;

        for(int j =0; j < n3; j++){
            if(nums3[j] == search) count++;
            if(count >= 2){ 
                ans.insert(search);
                break;
            }
        }
      }

      for(int i = 0; i < n2; i++){
        search = nums2[i];
        count = 1;

        for(int j =0; j < n3; j++){
            if(nums3[j] == search) count++;
            if(count >= 2){ 
                ans.insert(search);
                break;
            }
        }
      }

      int index =0;
      for(auto it: ans){
        result.push_back(it);
        index++;
      }
      return result;
    }
};