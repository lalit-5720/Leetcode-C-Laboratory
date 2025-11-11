char** fizzBuzz(int n, int* returnSize) {
    *returnSize=n;
    char **result=(char**)malloc(sizeof(char*)*n);
    for(int i =1;i<=n;i++){
        result[i-1]=(char*)malloc(sizeof(char)*9);
        if(i%3==0 && i%5==0){
            sprintf(result[i-1],"FizzBuzz");
        }
        else if(i%3==0){
            sprintf(result[i-1],"Fizz");
        }
        else if(i%5==0){
            sprintf(result[i-1],"Buzz");
        }
        else{
            sprintf(result[i-1],"%d",i);
        }
    }
    return result;
}