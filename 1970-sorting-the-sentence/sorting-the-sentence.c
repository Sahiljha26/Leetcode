

char * sortSentence(char * s){
     char* result = (char*)malloc(1001 * sizeof(char));
    char* words[10] = {NULL};

    char* token = strtok(s, " ");

    while (token != NULL) {
        int len = strlen(token);

        int pos = token[len - 1] - '0';

        token[len - 1] = '\0';

        words[pos - 1] = token;

        token = strtok(NULL, " ");
    }

    result[0] = '\0';

    for (int i = 0; i < 9; i++) {
        if (words[i] != NULL) {
            strcat(result, words[i]);
            strcat(result, " ");
        }
    }

    int len = strlen(result);

    if (len > 0) {
        result[len - 1] = '\0';
    }

    return result;

}