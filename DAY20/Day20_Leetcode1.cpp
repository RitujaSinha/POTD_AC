class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result = 0;
        result += numBottles;

        int temp = numBottles;
        while(temp != 0){
            int qout = (temp/numExchange);

            int rem = temp % numExchange;

            result += (qout+rem);
            temp = qout;
    
        }
        return result;
    }
};