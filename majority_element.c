struct count{
    int number;
    int times;
};
int majorityElement(int* nums, int numsSize) {
  struct count arr[numsSize];
  int k=0;
  for(int i=0;i<numsSize;i++){
    int found =0;
    for(int j =0;j<k;j++){
        if(arr[j].number == nums[i]){
            arr[j].times++;
            found = 1;
            break;
            }
        }
    if(!found){
        arr[k].number = nums[i];
        arr[k].times = 1;
        k++;
        }    
    }
    for(int i =0;i<k;i++){
        if(arr[i].times>numsSize/2){
            return arr[i].number;
        }
    }
    return -1; 
}