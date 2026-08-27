bool isPalindrome(int x) {
    int digit =0;
    int long   reverse =0;
    int original = x;

    if(x<0){
        return false;
    }

    while(x!=0){
        digit = x%10;
        reverse = reverse * 10 + digit ;
        x = x/10;
    }

    if( original == reverse ){
        return true;
    }
     return false;
}