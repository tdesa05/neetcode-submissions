class Solution {
   public:
    int trap(std::vector<int>& height) {
        int size = height.size();

        int left;
        int right;
        int water = 0;
        int totalWater = 0;

        for (int i = 1; i < (size - 1); i++) {
            auto left = std::max_element(begin(height), begin(height) + i);
            auto right = std::max_element(begin(height) + i, end(height));

            std::cout << "Vals for index: " << i << '\n';
            std::cout << "Left: " << *left << " Right: " << *right << '\n';

            water = std::min(*left, *right) - height[i];
            std::cout << "Water" << '\n';
            std::cout << water << '\n';

            if (std::abs(water) == water) {
                totalWater += water;
            }
            std::cout << "Total" << '\n';
            std::cout << totalWater << '\n' << '\n';
        }

        return totalWater;
    }
};