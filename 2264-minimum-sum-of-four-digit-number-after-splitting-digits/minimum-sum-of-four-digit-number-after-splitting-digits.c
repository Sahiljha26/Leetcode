
int minimumSum(int num) {
    int arr[4];

    for (int i = 0; i < 4; i++) {
        arr[i] = num % 10;
        num = num / 10;
    }

    // Sort the digits in ascending order
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int num1 = arr[0] * 10 + arr[2];
    int num2 = arr[1] * 10 + arr[3];

    return num1 + num2;
}
