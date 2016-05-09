/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-09 23:28:22
 *
 * Brief:
 * Determine whether a Sudoku is valid.
 * The Sudoku board could be partially filled,
 * where empty cells are filled with the character ..
 * Example:
 *
 * Detail:
 */
class Solution {
public:
    /**
      * @param board: the board
      * @return: wether the Sudoku is valid
      */
    bool isValidSudoku(const vector<vector<char>>& board) {
        bool used[9];
        for (int i = 0; i < 9; ++i) {
            // check the line
            fill(used, used + 9, false);  // init used array
            for (int j = 0; j < 9; ++j) {
                if (!check(board[i][j], used))
                    return false;
            }
            // check the row
            fill(used, used + 9, false);  // reset used array
            for (int j = 0; j < 9; ++j) {
                if (!check(board[j][i], used))
                    return false;
            }
        }
        // check the small box
        for (int row = 0; row < 3; ++row) {
            for (int column = 0; column < 3; ++column) {
                fill(used, used + 9, false);  // reset used array
                for (int i = row * 3; i < row * 3 + 3; ++i) {
                    for (int j = column * 3; j < column * 3 + 3; ++j)
                        if (!check(board[i][j], used))
                            return false;
                }
            }
        }
        return true;
    }

    bool check(char ch, bool used[9]) {
        if (ch == '.') return true;
        if (used[ch -'1']) return false;
        return used[ch - '1'] = true;
    }
};

/*
 * Reflection:
 * line25: use ASCII value to got the integer index
 */
