

char* interpret(char* command) {
    int n = strlen(command);

    char* result = (char*)malloc((n + 1) * sizeof(char));

    int i = 0;
    int j = 0;

    while (command[i] != '\0') {

        if (command[i] == 'G') {
            result[j++] = 'G';
            i++;
        }

        else if (command[i] == '(' && command[i + 1] == ')') {
            result[j++] = 'o';
            i += 2;
        }

        else if (command[i] == '(' && command[i + 1] == 'a') {
            result[j++] = 'a';
            result[j++] = 'l';
            i += 4;
        }
    }

    result[j] = '\0';

    return result;
}
