// Problem 32
#include "../inclusions.hpp"
class Solution {
    #define MAX(A,B) ((A>B?)A:B)

    /**
i am thinking maybe to parse it with recursion, throw the time complexity out of the window:


(()) -> (1) -> 2 --> 2

((()()) -> ((11) -> ((2) -> (3 --> 3
    */
    
public:
    int longestValidParentheses(string& s) {
        int ssize = s.size();
        if (ssize == 0){
            return 0;
        }
        int max_len = 0, curr_len = 0;
        
        return MAX(max_len,curr_len) //take care of edge case that longest substr is at the end of the string
    }
};