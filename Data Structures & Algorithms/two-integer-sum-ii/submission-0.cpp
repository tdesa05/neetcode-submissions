class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        auto pStart = 0;
        auto pEnd = size - 1;

        while (true) {
            if (pStart == pEnd) {
                return {};
            } else if (numbers[pStart] + numbers[pEnd] == target) {
                return {pStart+1, pEnd+1};
            } else if (numbers[pStart] + numbers[pEnd] > target) {
                pEnd--;
            } else {
                pStart++;
            }
        }
    }
};
