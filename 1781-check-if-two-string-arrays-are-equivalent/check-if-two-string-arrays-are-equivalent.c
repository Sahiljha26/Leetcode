bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
     char str1[1001] = "";
    char str2[1001] = "";

    for (int i = 0; i < word1Size; i++) {
        strcat(str1, word1[i]);
    }

    for (int i = 0; i < word2Size; i++) {
        strcat(str2, word2[i]);
    }

    return strcmp(str1, str2) == 0;
    
}