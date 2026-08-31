int minElement(int* nums, int numsSize) {
    int min = 100000000;

    for (int i=0; i< numsSize; i++){
         int n = nums[i];
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        if (sum < min) {
            min = sum;
        }
    }

    return min;
    }
    
