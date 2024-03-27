int maxFrequencyElements(int* nums, int numsSize) {
    int a[101] = {}; //統計數字出現的次數
    int best = 0;
    for(int i=0; i<numsSize; i++){
        int now =nums[i]; //現在要處理這個數
        a[now]++; //統計次數+1
        if(a[now]>best) best = a[now];//更多的次數
    }
    int ans = 0;//答案出現幾次
    for(int i=0;i<numsSize; i++){ //逐一處理nums[i]
        int now = nums[i];
        if(a[now]==best) ans++; ///結果她出現的次數是best,就多1 個

    }
    return ans;
}