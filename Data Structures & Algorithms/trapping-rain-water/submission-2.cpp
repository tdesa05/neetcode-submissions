class Solution {
   public:
    int trap(std::vector<int>& height) {
        int size = height.size();
        int water = 0;
        int totalWater = 0;

        for (int i = 1; i < (size - 1); i++) {
            auto left = std::max_element(begin(height), begin(height) + i);
            auto right = std::max_element(begin(height) + i, end(height));
            water = std::min(*left, *right) - height[i];
            if (std::abs(water) == water) {
                totalWater += water;
            }
        }

        return totalWater;
    }
};