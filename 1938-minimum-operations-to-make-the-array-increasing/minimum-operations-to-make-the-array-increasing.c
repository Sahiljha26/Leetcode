

int minOperations(int* nums, int numsSize){
     int operations = 0;

    for (int i = 1; i < numsSize; i++) {

        if (nums[i] <= nums[i - 1]) {

            int difference = nums[i - 1] - nums[i] + 1;

            nums[i] = nums[i] + difference;

            operations = operations + difference;
        }
    }

    return operations;

}