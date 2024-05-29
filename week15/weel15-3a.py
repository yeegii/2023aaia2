
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先用python把字串迴圈寫出來
        N = len(s) #先知道字串長度
        ans=0
        j=0 #毛毛蟲的尾巴j
        for i in range(N):#字串迴圈
            maxCost -= abs(ord (s[i]) - ord(t[i]))
            while maxCost <0: #能量不夠 尾巴要縮
                maxCost +=abs(ord(s[j]) - ord(t[j]))
                j+=1
            ans = max(ans,i-j+1)
        return ans #課堂作業1 先隨便給個0當答案(答案不對)