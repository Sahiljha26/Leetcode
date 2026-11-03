

char * defangIPaddr(char * address){
     int n = strlen(address);

    char* result = (char*)malloc((n + 7) * sizeof(char));

    int j = 0;

    for (int i = 0; i < n; i++) {
        if (address[i] == '.') {
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';
        }
        else {
            result[j++] = address[i];
        }
    }

    result[j] = '\0';

    return result;

}