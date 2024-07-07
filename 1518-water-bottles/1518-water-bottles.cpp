class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int runBottle = numBottles;
        int bottleDr = 0;
        int bottleExc = 0;
        for (int i = 1; i <= runBottle; i++) {
            bottleDr++;
            bottleExc++;
            if(bottleExc == numExchange) {
                runBottle++;
                bottleExc = 0;
            }
        }
         return bottleDr;
    }
};