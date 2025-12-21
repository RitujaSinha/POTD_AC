class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result = 0;
        result += numBottles;

        int temp = numBottles;
        while(temp >= numExchange){
            int qout = (temp/numExchange);

            int rem = temp % numExchange;

            result += qout;
            temp = qout+rem;
    
        }
        return result;
    }
};