/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int*arr = (int*)malloc(n*sizeof(int));
    int j=0;
    for(int i = 1; i <= n/2; i++){
        arr[j++] = i;
        arr[j++] = -i;

    }
    if(n%2!=0){
        arr[j++] = 0;
    }
    *returnSize = n;
    return arr;
}