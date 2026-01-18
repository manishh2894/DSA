class Solution {
public:
    bool isMagic(vector<vector<int>>& g, int r, int c, int k) {
        int target = 0;
        for (int j = 0; j < k; j++) target += g[r][c + j];

        // rows
        for (int i = 0; i < k; i++) {
            int s = 0;
            for (int j = 0; j < k; j++) s += g[r + i][c + j];
            if (s != target) return false;
        }

        // columns
        for (int j = 0; j < k; j++) {
            int s = 0;
            for (int i = 0; i < k; i++) s += g[r + i][c + j];
            if (s != target) return false;
        }

        // diagonals
        int d1 = 0, d2 = 0;
        for (int i = 0; i < k; i++) {
            d1 += g[r + i][c + i];
            d2 += g[r + i][c + k - 1 - i];
        }
        return d1 == target && d2 == target;
    }

    int largestMagicSquare(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int maxK = min(m, n);

        for (int k = maxK; k >= 2; k--) {
            for (int i = 0; i + k <= m; i++) {
                for (int j = 0; j + k <= n; j++) {
                    if (isMagic(grid, i, j, k)) return k;
                }
            }
        }
        return 1;
    }
};
