int longestValidParentheses(char* s) {
    int maxLen = 0;
    int stack[30000];  // Enough for LeetCode input size
    int top = -1;

    stack[++top] = -1;  // Base index for valid substring

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            stack[++top] = i;
        } else {
            top--;  // Pop the last '('
            if (top == -1) {
                stack[++top] = i;  // New base
            } else {
                int length = i - stack[top];
                if (length > maxLen)
                    maxLen = length;
            }
        }
    }

    return maxLen;    
}