int findGCD(int* nums, int numsSize) {
     int min = nums[0];
    int max = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }

        if (nums[i] > max) {
            max = nums[i];
        }
    }

    for (int i = min; i >= 1; i--) {
        if (min % i == 0 && max % i == 0) {
            return i;
        }
    }

    return 1;
    
}