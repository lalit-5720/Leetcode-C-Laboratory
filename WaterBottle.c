int numWaterBottles(int numBottles, int numExchange) {
    // int result = numBottles;
    // int empty = numBottles;

    // while (empty >= numExchange) {
    //     int newBottles = empty / numExchange;
    //     result += newBottles;
    //     empty = empty % numExchange + newBottles;
    // }

   // return result;
    int result=0;
    int empty=0;
    int t_empty=0;
    while(numBottles>0 || t_empty>=numExchange){
        if(t_empty>=numExchange){
            numBottles++;
            t_empty-=numExchange;
        }
        result+=numBottles;
        empty=numBottles%numExchange;
        t_empty+=empty;
        numBottles/=numExchange;
        

    }
    return result;
}