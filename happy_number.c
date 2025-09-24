bool isHappy(int n) {
    int temp=n;
    int square=0,flag=0;
    int numbers=n;
    while(numbers!=1 && numbers!=4)
    {
        square=0;
        while(temp!=0)
        {
            int rem=temp%10;
            square+=rem*rem;
            temp=temp/10;
        }
        numbers=square;
        temp=numbers;
    }
    return numbers==1;
}