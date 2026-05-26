class Solution {
public:
  int trap(std::vector<int> &height) {
    int size = height.size();

    int left = 0;
    int right = size - 1;
    int leftMax = 0;
    int rightMax = 0;
    int totalWater = 0;

    while (left < right) {
      // If the left height is smaller, we focus on it
      if (height[left] < height[right]) {
        if (height[left] >= leftMax) {
          leftMax = height[left]; // New left max
        } else {
          totalWater += leftMax - height[left];
        }
        left++; // Move closer to right
      }
      // Else, we are focusing on right height (basically does min(left,right)
      // functionality)
      else {
        if (height[right] >= rightMax) {
          rightMax = height[right]; // New right max
        } else {
          totalWater += rightMax - height[right];
        }
        right--; // Move closer to left
      }
    }

    return totalWater;
  }
};