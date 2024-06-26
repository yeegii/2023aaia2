#988
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode])-> str:
        #要做對照表,把0.25對照成字母'a......z'
        table = "abcdefghijklmnopqrstuvwxyz" #字母對照表
        def helper(root,nowStr): #nowStr累積的字串
            #if roott == None:return nowStr #樹下沒有東西時,右邊累積的字串,就是結果
            nextStr = table[root.val] + nowStr
            if root.left==None and root.right==None: return nextStr #最後的葉子 沒有左右
            if root.left==None: return helper(root.right,nextStr) #右邊空的 只能往又跑
            if root.right==None:return helper(root.left,nextStr)#左邊空的 只能往左跑
            #以下是健康的狀況,左右邊都有分支,就要兩邊都算,再把小的答案送出去
            left = helper(root.left, nextStr) #左邊的結果
            right = helper(root.right, nextStr) #右邊的結果
            return min(left,right) #結果小的,當答案return回去
        return helper(root,'')
