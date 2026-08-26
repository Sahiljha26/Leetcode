int productOfDigits(int n){
    int prod = 1;
    while(n!=0){
    int d = n%10;
    prod*= d;
    n/=10; // seperating each digits
  }
  return prod;

}
int smallestNumber(int n, int t) {
    while(productOfDigits(n)%t!=0)n++;
    return n;
}