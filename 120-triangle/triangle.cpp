class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        for (int row = 1; row < n; row++) {
            for (int col = 0; col < triangle[row].size(); col++) {
                int prev_up = INT_MAX, prev_left = INT_MAX;
                if (col < triangle[row-1].size())
                    prev_up = triangle[row-1][col];
                if (col-1 >= 0)
                    prev_left = triangle[row-1][col-1];
                triangle[row][col] += min(prev_up, prev_left);
            }
        }
        return *min_element(begin(triangle[n-1]), end(triangle[n-1]));
    }
};
