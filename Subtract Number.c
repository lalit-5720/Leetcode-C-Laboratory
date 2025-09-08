int subtractProductAndSum(int n) {
    int product_digit=1;
    int sum_digit=0;
    int rem=0;
    while(n>0)
    {
        rem=n%10;
        product_digit=product_digit*rem;
        sum_digit=sum_digit+rem;
        n/=10;
    }
    return product_digit-sum_digit;

    
}