class Solution:
    def pivotInteger(self, n: int) -> int:
        total = 0 #全部加起來的數字
        # 第一輪,先算總和total
        for i in range(1,n+1): #:1,2,3,4,....,n
            total +=i #先算出全部總和
       
        left = 0 #左邊的總和
        for i in range(1,n+1):#再做第二輪 檢查左邊加起來多少
            left += i
            if left + left - i ==total:return i
        return -1