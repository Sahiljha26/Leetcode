/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int*ans = (int*)malloc((right -left+1)*sizeof(int));
    *returnSize = 0;

    for( int i = left; i <= right; i++){
        int n = i;
        int flag = 1;

        while(n>0){
            int digit = n%10;

            if(digit==0 ||i% digit!=0){
                flag = 0;
                break;
            }

            n=n/10;
        }
        if(flag ==1){
            ans[*returnSize]=i;
            (*returnSize)++;
        }
    }
    return ans;
}