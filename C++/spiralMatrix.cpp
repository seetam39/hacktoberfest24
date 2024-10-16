#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        if (matrix.empty()) return result;  // Return empty if matrix is empty

        int top = 0, bottom = matrix.size() - 1;  // Row bounds
        int left = 0, right = matrix[0].size() - 1;  // Column bounds

        while (top <= bottom && left <= right) {
            // Traverse from left to right across the top row
            for (int i = left; i <= right; ++i) {
                result.push_back(matrix[top][i]);
            }
            top++;  // Move the top boundary down

            // Traverse down the right column
            for (int i = top; i <= bottom; ++i) {
                result.push_back(matrix[i][right]);
            }
            right--;  // Move the right boundary left

            // Traverse from right to left across the bottom row, if still valid
            if (top <= bottom) {
                for (int i = right; i >= left; --i) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;  // Move the bottom boundary up
            }

            // Traverse up the left column, if still valid
            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    result.push_back(matrix[i][left]);
                }
                left++;  // Move the left boundary right
            }
        }

        return result;
    }
};
