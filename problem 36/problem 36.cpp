// Problem 36
#include "../inclusions.hpp"
#define USE_EFFIECENT_INSPIRED_CODE (1)
class Solution {
public:
#if USE_EFFIECENT_INSPIRED_CODE
    bool isValidSudoku(vector<vector<char>>& board) {
        short* rows[9];
        short* cols[9];
        short* boxes[9];

        for (int i = 0; i < 9; ++i) {
            rows[i] = new short[9]();   // () zero-initializes
            cols[i] = new short[9]();
            boxes[i] = new short[9]();
        }

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    continue;
                }

                char value = board[r][c];
                int boxIndex = (r / 3) * 3 + (c / 3);

                if (rows[r][value-'1'] || cols[c][value-'1'] || boxes[boxIndex][value-'1']) {
                    return false;
                }

                ++rows[r][value-'1'];
                ++cols[c][value-'1'];
                ++boxes[boxIndex][value-'1'];
            }
        }

        return true;        
    }


#else //USE_EFFIECENT_INSPIRED_CODE
#pragma region oldCode
    #define HIST_SIZE ('9'-'0'+1)
    #define CLEAR_HIST (resethist(hist))
    #define PRINT_BOARD (true)
public:

    struct coordinate {
        int row;
        int col;
    };

    void resethist(int* hist){
        for (int i = 0; i < HIST_SIZE; ++i){
            hist[i] = 0;
        }
    }

    bool verifyVec(const vector<char>& vec,int* hist){
        for (const char c : vec){
            if (c == '.'){continue;}
            ++hist[c-'0'];
            if (hist[c-'0'] > 1){return false;}
        }
        return true;
    }

    void printBoard(const vector<vector<char>>& board){
        for (const auto& row : board){
            cout << '|';
            for (const char c : row){
                cout << c << '|';
            }
            cout << endl;
            #if 0
            cout << '=';
            for (const char c : row){
                cout << '=' << '=';
            }
            cout << endl;
            #endif
        }
    }

    /* using the functions with #define for better performance,
    while maintaining the readability of the 'main' function */
    #define VERIFY_ROW(BOARD,HIST) \
    for (const auto& row : (BOARD)){\
        CLEAR_HIST;\
        if (!verifyVec(row,(HIST))){\
            return false;\
        }\
    }

    #define VERIFY_COL(BOARD,HIST) \
        for (int i = 0; i < (BOARD)[0].size(); ++i){\
            vector<char> col;\
            for (const auto& row : BOARD){\
                col.push_back(row[i]);\
            }\
            CLEAR_HIST;\
            if (!verifyVec(col,(HIST))){\
                return false;\
            }\
        }

    #define VERIFY_SEG(BOARD,HIST) \
        coordinate starting_coordinates[] = {{0,0},{0,3},{0,6},\
                                            {3,0},{3,3},{3,6},\
                                            {6,0},{6,3},{6,6}};\
        for (const coordinate& top_left_of_segment : starting_coordinates){\
            vector<char> seg;\
            for(int row_step = 0; row_step < 3; ++row_step){\
                for (int col_step = 0; col_step < 3; ++col_step){\
                    char char_at_coordinate = (BOARD)[top_left_of_segment.row + row_step][top_left_of_segment.col + col_step];\
                    seg.push_back(char_at_coordinate);\
                }\
            }\
            CLEAR_HIST;\
            if (!verifyVec(seg,(HIST))){\
                return false;\
            }\
        }

    bool isValidSudoku(vector<vector<char>>& board) {
        /* for row in board -> validate row */
        /* for col in board -> validate col */
        /* if one returned false, return false immediatly */
        /* if iterated over everything and all was true, return true */

        #if PRINT_BOARD
        printBoard(board);
        #endif

        int hist[HIST_SIZE];
        

        /*
        for (const auto& row : board){
            CLEAR_HIST;
            if (!verifyVec(row,hist)){
                return false;
            }
        }
        */
       VERIFY_ROW(board,hist)

       /*
        for (int i = 0; i < board[0].size(); ++i){
            vector<char> col;
            for (const auto& row : board){
                col.push_back(row[i]);
            }
            CLEAR_HIST;
            if (!verifyVec(col,hist)){
                return false;
            }
        }
        */
        VERIFY_COL(board,hist)

        /*
        coordinate starting_coordinates[] = {{0,0},{0,3},{0,6},\
                                            {3,0},{3,3},{3,6},\
                                            {6,0},{6,3},{6,6}};
        for (const coordinate& top_left_of_segment : starting_coordinates){
            vector<char> seg;
            // here i am using a lot of temporary variables for code readability,
            // in the actual code i am reding them into a single line,
            // with the hopes that this would reduce memory acces,
            // and tend to store temporary results on the registers.
            int row_origin = top_left_of_segment.row;
            int col_origin = top_left_of_segment.col;
            // traverse all row stepping options relative to origin (top left)
            for(int row_step = 0; row_step < 3; ++row_step){
                // traverse all coloum stepping options relative to origin (top left)
                for (int col_step = 0; col_step < 3; ++col_step){
                    int curr_row_coordinate = row_origin + row_step;
                    int curr_col_coordinate = col_origin + col_step;
                    char char_at_coordinate = board[curr_row_coordinate][curr_col_coordinate];
                    seg.push_back(char_at_coordinate);
                }
            }
            CLEAR_HIST;
            if (!verifyVec(seg,hist)){
                return false;
            }
        }
        */
        VERIFY_SEG(board,hist)

        return true;

        
    }
#pragma endregion
#endif //USE_EFFIECENT_INSPIRED_CODE
};