// Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

// If the last word does not exist, return 0.

// Note: A word is defined as a character sequence consists of non-space characters only.

// For example, 
// Given s = "Hello World",
// return 5.

class Solution {
public:
    int lengthOfLastWord(const char *s) {
        if(!s || !*s) return 0;
        const char *start = s;
        int last = 0;
        while(true) {
            while(*start && *start == ' ') ++start;
            if(!*start) return last;
            const char *end = start;
            int cnt = 0;
            while(*end && *end != ' ') {
                ++end;
                ++cnt;
            }
            last = cnt;
            start = end;
        }
    }
};
