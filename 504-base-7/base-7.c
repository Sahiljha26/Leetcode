

char* convertToBase7(int num) {
    char *result = malloc(20);
    int i = 0;

    if (num == 0) {
        result[i++] = '0';
        result[i] = '\0';
        return result;
         }

    long long n = num;

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {

        int rem = n % 7;

        result[i] = rem + '0';
        i++;

        n = n / 7;
    }

    if (num < 0) {
        result[i++] = '-';
    }

    result[i] = '\0';

    // Reverse the string
    int start = 0;
    int end = i - 1;

    while (start < end) {

        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;

        start++;
        end--;
    }

    return result;
}