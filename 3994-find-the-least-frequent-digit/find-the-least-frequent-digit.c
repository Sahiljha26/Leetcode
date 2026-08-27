int getLeastFrequentDigit(int n) {
    int freq[10]={0};

    while(n>0){
        int digit = n%10;
         freq[digit]++;
         n/=10;
    }

    int digit =0;
    int minfreq = 1000000;

    for( int i=0;i<10;i++){
        if(freq[i] > 0 && freq[i] < minfreq){
            minfreq = freq[i];
            digit = i;
        }
    }

    return digit;
}