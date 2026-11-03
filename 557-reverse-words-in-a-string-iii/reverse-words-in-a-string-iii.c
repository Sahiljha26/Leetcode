char* reverseWords(char* s) {
      int start = 0;
    int end = 0;

    while (1) {
        if (s[end] == ' ' || s[end] == '\0') {

            int left = start;
            int right = end - 1;

            while (left < right) {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;

                left++;
                right--;
            }

            if (s[end] == '\0') {
                break;
            }

            start = end + 1;
        }

        end++;
    }

    return s;
    
}