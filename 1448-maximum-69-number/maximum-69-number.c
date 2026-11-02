
int maximum69Number (int num) {
    int divisor = 1;
    int temp = num;

    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    while (divisor > 0) {
        int digit = (num / divisor) % 10;

        if (digit == 6) {
            num = num + (3 * divisor);
            break;
        }

        divisor = divisor / 10;
    }

    return num;
}
