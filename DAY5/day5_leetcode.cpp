class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int  symmetric =0;

        for(int i = low; i <= high; i++){
            int leftSum =0, rightSum = 0;
                string x = to_string(i);

                if(x.size() % 2 != 0){
                    continue;
                } else{
                    int n = (x.size()) / 2;
                    
                    for(int i = 0; i < n; i++){
                        leftSum += x[i];
                    }
                    for(int i = n; i < x.size(); i++){
                        rightSum += x[i];
                    }

                    if(leftSum == rightSum) symmetric++;
                }
        }
        return symmetric;
    }
};