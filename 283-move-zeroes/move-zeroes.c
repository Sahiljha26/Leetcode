void moveZeroes(int* nums, int numsSize) {
    int lastnonzeroindex=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[lastnonzeroindex++]=nums[i];
            // loop 

        }
    }
    
    for(int i=lastnonzeroindex;i<numsSize;i++){
        nums[i]=0;
    }
}