char* reverseWords(char* s) {
    int n = strlen(s);
    char* result = (char*)malloc((n + 1) * sizeof(char));

    int i = n - 1;
    int j = 0;

    while (i >= 0) {
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        if (i < 0) {
            break;
        }

        int end = i;

        while (i >= 0 && s[i] != ' ') {
            i--;
        }

        int start = i + 1;

        if (j > 0) {
            result[j++] = ' ';
        }

        for (int k = start; k <= end; k++) {
            result[j++] = s[k];
        }
    }

    result[j] = '\0';

    return result;
}