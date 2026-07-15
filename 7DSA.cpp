//Maximum Consecutive Ones


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;

        for (int num : nums) {
            if (num == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

        return maxCount;
    }
};






//Palindromic Array


class Solution {
  public:
  
    bool isPalindrome(int n) {
        int original = n;
        int rev = 0;
        
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        
        return original == rev;
    }
  
    bool isPalinArray(vector<int> &arr) {
        for (int num : arr) {
            if (!isPalindrome(num))
                return false;
        }
        return true;
    }
};










//





















