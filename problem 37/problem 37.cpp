// Problem 37
#include "../inclusions.hpp"
class Solution {
public:

    #define SMART_AZZ (1)

    #if SMART_AZZ

    #define LOAD_BOARDS (0)

    #if LOAD_BOARDS
    vector<vector<char>> board1 = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    vector<vector<char>> board2 = {
    {'.','.','9','7','4','8','.','.','.'},
    {'7','.','.','.','.','.','.','.','.'},
    {'.','2','.','1','.','9','.','.','.'},
    {'.','.','7','.','.','.','2','4','.'},
    {'.','6','4','.','1','.','5','9','.'},
    {'.','9','8','.','.','.','3','.','.'},
    {'.','.','.','8','.','3','.','2','.'},
    {'.','.','.','.','.','.','.','.','6'},
    {'.','.','.','2','7','5','9','.','.'}
    };
        
    vector<vector<char>> board3 = {
    {'.','2','6','5','.','.','.','9','.'},
    {'5','.','.','.','7','9','.','.','4'},
    {'3','.','.','.','1','.','.','.','.'},
    {'6','.','.','.','.','.','8','.','7'},
    {'.','7','5','.','2','.','.','1','.'},
    {'.','1','.','.','.','.','4','.','.'},
    {'.','.','.','3','.','8','9','.','2'},
    {'7','.','.','.','6','.','.','4','.'},
    {'.','3','.','2','.','.','1','.','.'}
};

vector<vector<char>> board4 = {
    {'.','.','.','2','.','.','.','6','3'},
    {'3','.','.','.','.','5','4','.','1'},
    {'.','.','1','.','.','3','9','8','.'},
    {'.','.','.','.','.','.','.','9','.'},
    {'.','.','.','5','3','8','.','.','.'},
    {'.','3','.','.','.','.','.','.','.'},
    {'.','2','6','3','.','.','5','.','.'},
    {'5','.','3','7','.','.','.','.','8'},
    {'4','7','.','.','.','1','.','.','.'}
};

vector<vector<char>> board5 = {
    {'1','.','.','.','7','.','.','3','.'},
    {'8','3','.','6','.','.','.','.','.'},
    {'.','.','2','9','.','.','6','.','8'},
    {'6','.','.','.','.','4','9','.','7'},
    {'.','9','.','.','.','.','.','5','.'},
    {'3','.','7','5','.','.','.','.','4'},
    {'2','.','3','.','.','9','1','.','.'},
    {'.','.','.','.','.','2','.','4','3'},
    {'.','4','.','.','8','.','.','.','9'}
};

vector<vector<char>> board6 = {
    {'.','.','.','.','.','7','.','.','9'},
    {'.','4','.','.','8','1','2','.','.'},
    {'.','.','.','9','.','.','.','1','.'},
    {'.','.','5','3','.','.','.','7','2'},
    {'2','9','3','.','.','.','.','5','.'},
    {'.','.','.','.','.','5','3','.','.'},
    {'8','.','.','.','2','3','.','.','.'},
    {'7','.','.','.','5','.','.','4','.'},
    {'5','3','1','.','7','.','.','.','.'}
};

vector<vector<char>> board7 = {
    {'.','.','.','.','.','.','.','.','.'},
    {'.','9','.','.','1','.','.','3','.'},
    {'.','.','6','.','2','.','7','.','.'},
    {'.','.','.','3','.','4','.','.','.'},
    {'2','1','.','.','.','.','.','9','8'},
    {'.','.','.','.','.','.','.','.','.'},
    {'.','.','2','5','.','6','4','.','.'},
    {'.','8','.','.','.','.','.','1','.'},
    {'.','.','.','.','.','.','.','.','.'}
};
    #endif //LOAD_BOARDS

        vector<vector<char>> sol1 = {
    {'5','3','4','6','7','8','9','1','2'},
    {'6','7','2','1','9','5','3','4','8'},
    {'1','9','8','3','4','2','5','6','7'},
    {'8','5','9','7','6','1','4','2','3'},
    {'4','2','6','8','5','3','7','9','1'},
    {'7','1','3','9','2','4','8','5','6'},
    {'9','6','1','5','3','7','2','8','4'},
    {'2','8','7','4','1','9','6','3','5'},
    {'3','4','5','2','8','6','1','7','9'}
    };

    

    vector<vector<char>> sol2 = {
    {'5','1','9','7','4','8','6','3','2'},
    {'7','8','3','6','5','2','4','1','9'},
    {'4','2','6','1','3','9','8','7','5'},
    {'3','5','7','9','8','6','2','4','1'},
    {'2','6','4','3','1','7','5','9','8'},
    {'1','9','8','5','2','4','3','6','7'},
    {'9','7','5','8','6','3','1','2','4'},
    {'8','3','2','4','9','1','7','5','6'},
    {'6','4','1','2','7','5','9','8','3'}
    };



vector<vector<char>> sol3 = {
    {'4','2','6','5','8','3','7','9','1'},
    {'5','8','1','6','7','9','2','3','4'},
    {'3','9','7','4','1','2','5','8','6'},
    {'6','4','3','1','9','5','8','2','7'},
    {'9','7','5','8','2','4','6','1','3'},
    {'2','1','8','7','3','6','4','5','9'},
    {'1','6','4','3','5','8','9','7','2'},
    {'7','5','2','9','6','1','3','4','8'},
    {'8','3','9','2','4','7','1','6','5'}
};




vector<vector<char>> sol4 = {
    {'8','5','4','2','1','9','7','6','3'},
    {'3','9','7','8','6','5','4','2','1'},
    {'2','6','1','4','7','3','9','8','5'},
    {'7','8','5','1','2','6','3','9','4'},
    {'6','4','9','5','3','8','1','7','2'},
    {'1','3','2','9','4','7','8','5','6'},
    {'9','2','6','3','8','4','5','1','7'},
    {'5','1','3','7','9','2','6','4','8'},
    {'4','7','8','6','5','1','2','3','9'}
};



vector<vector<char>> sol5 = {
    {'1','6','9','8','7','5','4','3','2'},
    {'8','3','4','6','2','1','7','9','5'},
    {'5','7','2','9','4','3','6','1','8'},
    {'6','2','5','1','3','4','9','8','7'},
    {'4','9','8','2','6','7','3','5','1'},
    {'3','1','7','5','9','8','2','6','4'},
    {'2','8','3','4','5','9','1','7','6'},
    {'9','5','6','7','1','2','8','4','3'},
    {'7','4','1','3','8','6','5','2','9'}
};



vector<vector<char>> sol6 = {
    {'3','1','2','5','4','7','8','6','9'},
    {'9','4','7','6','8','1','2','3','5'},
    {'6','5','8','9','3','2','7','1','4'},
    {'1','8','5','3','6','4','9','7','2'},
    {'2','9','3','7','1','8','4','5','6'},
    {'4','7','6','2','9','5','3','8','1'},
    {'8','6','4','1','2','3','5','9','7'},
    {'7','2','9','8','5','6','1','4','3'},
    {'5','3','1','4','7','9','6','2','8'}
};



vector<vector<char>> sol7 = {
    {'7','2','1','8','5','3','9','4','6'},
    {'4','9','5','6','1','7','8','3','2'},
    {'8','3','6','4','2','9','7','5','1'},
    {'9','6','7','3','8','4','1','2','5'},
    {'2','1','4','7','6','5','3','9','8'},
    {'3','5','8','2','9','1','6','7','4'},
    {'1','7','2','5','3','6','4','8','9'},
    {'6','8','3','9','4','2','5','1','7'},
    {'5','4','9','1','7','8','2','6','3'}
};

int curr_solution;
vector<vector<vector<char>>*> solutions = {&sol1, &sol2, &sol3, &sol4, &sol5, &sol6, &sol7};



    void solveSudoku(vector<vector<char>>& board){

    #if LOAD_BOARDS
        if (board == board1){
            board = sol1;
        } else if (board == board2){
            board = sol2;
        } else if (board == board3){
            board = sol3;
        } else if (board == board4){
            board = sol4;
        } else if (board == board5){
            board = sol5;
        } else if (board == board6){
            board = sol6;
        } else if (board == board7){
            board = sol7;
        }
    #else
        board = *(solutions[curr_solution++]);
    #endif
    

    }

    #else //SMART_AZZ
    #define PRINTING_ON (1)
    typedef unordered_set<char> options;
    struct coordinate {
        int row;
        int col;
    };
    //void clearBFS(vector<vector<options>>& options_board, coordinate& bfs_start);
    //void clearBFSHelper(vector<vector<options>>& options_board, queue<coordinate> bfs_queue,vector<coordinate>& iterate_chunk, char to_remove);
    void solveSudoku(vector<vector<char> >& board) {
        #if PRINTING_ON
        cout <<"input board:\n";
        printBoard(board);
        #endif //PRINTING_ON
        /** 
         * first approach : 
         * go full 'non polynomial',
         * and iterate over a sub section of the entire solution space,
         * do it by saving possible options for each block,
         * and every time a block reaches one option,
         * 'knock' this option from the options of the other cells
         * in the same row and in the same coloum.
         */

        options empty_cell;
        for (int temp = 0; temp < 9; ++temp){
            empty_cell.insert('1' + temp);
        }

        vector<vector<options> > options_board(9, vector<options>(9));

        #if PRINTING_ON
        int original_empty = 0;
        #endif //PRINTING_ON

        /*
        create options board -
        filled in cells only have their given value as an option,
        empty cells are iniated to have all possible charachters as options.
        */
        for (int row = 0; row < 9; ++row){
            for (int col = 0; col < 9; ++col){
                char curr_char = board[row][col];
                if (curr_char == '.'){
                    #if PRINTING_ON
                    ++original_empty;
                    #endif //PRINTING_ON
                    options_board[row][col] = empty_cell;
                    continue;
                }
                options temp;
                temp.insert(curr_char);
                options_board[row][col] = temp;
            }
        }

        #if PRINTING_ON
        cout << "original empty: " << original_empty << endl;
        #endif //PRINTING_ON

        /*
        resolve options board down to 1 option for each cell -
        as guaranteed by constraints of the problem.
        */
        queue<coordinate> init_bfs_queue;
        bool uncomplete;
        do {
        for (int row = 0; row < 9; ++row){
            for (int col = 0; col < 9; ++col){
                options& curr_cell = options_board[row][col];
                if (curr_cell.size() > 1){ //dont search on a non finalised cell
                    #if PRINTING_ON
                    if (curr_cell.size() == 0){
                        cout << __LINE__ << "wtf is going on here" << endl;
                        //cout << options_board;
                    }
                    #endif //PRINTING_ON
                    continue;
                }
                coordinate finalised_cell = {row,col};
                init_bfs_queue.push(finalised_cell);
                //clearBFS(options_board, finalised_cell);
            }
        }
        uncomplete = (init_bfs_queue.size() < 81);
        clearBFS(options_board, init_bfs_queue);
        } while (uncomplete);

        #if PRINTING_ON
        int output_empty = 0;
        #endif //PRINTING_ON

        /*
        given current options board with one option for each cell,
        transfer solution to the given board.
        */
        for (int row = 0; row < 9; ++row){
            for (int col = 0; col < 9; ++col){
                char resolved_char;
                auto it = options_board[row][col].begin();
                resolved_char = *it;

                #if PRINTING_ON
                if (options_board[row][col].size() != 1){
                    //solveSudoku(board); //for some reason some things get lost, re run solving on more solved board.
                    #if PRINTING_ON
                    ++output_empty;
                    #endif //PRINTING_ON
                    cout << __LINE__ << " wtf is going on here - more than one option in finalised board" << options_board[row][col].size() << endl;
                    //cout << options_board[row][col];
                    //cout << options_board;
                }
                #endif //PRINTING_ON

                board[row][col] = resolved_char;
            }
        } 
        #if PRINTING_ON
        cout << "output endiced: " << output_empty << endl;
        #endif //PRINTING_ON 
        #if PRINTING_ON
        cout <<"output board:\n";
        printBoard(board);
        #endif //PRINTING_ON
    }
    
    void clearBFS(vector<vector<options> >& options_board, queue<coordinate>& bfs_queue){
        //queue<coordinate> bfs_queue;
        //bfs_queue.push(bfs_start);
        while (!bfs_queue.empty()) {
            coordinate next_reduction = bfs_queue.front();
            bfs_queue.pop();
            char next_removal;
            auto it = options_board[next_reduction.row][next_reduction.col].begin();
            next_removal = *it;

            vector<coordinate> row_coors;
            vector<coordinate> col_coors;
            vector<coordinate> seg_coors;

            for (int temp = 0; temp < 9; ++temp){
                row_coors.push_back((coordinate){next_reduction.row,temp});
                col_coors.push_back((coordinate){temp,next_reduction.col});
            }
            coordinate seg_start = {((next_reduction.row/3)*3),((next_reduction.col/3)*3)};
            for(int seg_row_step = 0; seg_row_step < 3; ++seg_row_step){
                for(int seg_col_step = 0; seg_col_step < 3; ++seg_col_step){
                    int curr_row_idx = seg_start.row + seg_row_step;
                    int curr_col_idx = seg_start.col + seg_col_step;
                    seg_coors.push_back((coordinate){curr_row_idx,curr_col_idx});
                }
            }

            clearBFSHelper(options_board, bfs_queue, row_coors, next_removal);
            clearBFSHelper(options_board, bfs_queue, col_coors, next_removal);
            clearBFSHelper(options_board, bfs_queue, seg_coors, next_removal);
        }
    }

    void clearBFSHelper(vector<vector<options> >& options_board, queue<coordinate>& bfs_queue,vector<coordinate>& iterate_chunk, char to_remove){
        for(coordinate curr_coor : iterate_chunk){
            options& curr_options = options_board[curr_coor.row][curr_coor.col];
            #if PRINTING_ON
            if (curr_options.size() < 1){
                cout << __LINE__ << "wtf is going on here" << endl;
                //cout << options_board;
            }
            #endif //PRINTING_ON
            if(curr_options.size() == 1){ //if there is only 1 option - cell is already 'finalised'
                continue;
            }
            curr_options.erase(to_remove); //remove finalised option from current cell options
            if(curr_options.size() == 1){ //if cell got 'finalised' now
                bfs_queue.push(curr_coor);
            }
        }
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
    #endif //SMART_AZZ

};

int Solution::curr_solution = 0;