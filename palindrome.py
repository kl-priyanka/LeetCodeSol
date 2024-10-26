class Solution(object):
    def isPalindrome(self, x):
        s = str(x)
        length = int(len(s)/2)
        for i in range(length):
            if s[i] != s[-(i + 1)]:
                return False
        return True
