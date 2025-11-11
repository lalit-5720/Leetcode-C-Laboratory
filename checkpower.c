bool checkPowersOfThree(int n) {
    int sum=0;
    for(int i=n/3+1;i>=0;i--){
        if(pow(3,i)==n){
            return true;
        }
        else if((pow(3,i)<n) && ((sum+pow(3,i)<=n))){
            sum+=pow(3,i);
            if (sum==n){
                return true;
            }
        }
    }
    return false;
}