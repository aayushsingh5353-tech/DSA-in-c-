//MOVE ZERO TO END

class Solution {
public:
    void moveZeroes(vector <int> & nums) {
        int j = 0; 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
        }
    }
};



//Sort array with 0's 1's and 2's (Dutch Flag)


class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int l = 0, m=0, h=nums.size() -1;

        while (m<=h){
            if (nums[m] ==0)
                swap(nums[l++], nums[m++]);
            else if (nums[m] == 1)
                m++;
            else
                swap(nums[m], nums[h--]);
        }
    }
};





//Equilibrium Point




class Solution {
public:
    int equilibriumPoint(vector<int>& arr) {
        int total = 0, left = 0;

        for (int x : arr)
            total += x;

        for (int i = 0; i < arr.size(); i++) {
            total -= arr[i];

            if (left == total)
                return i;

            left += arr[i];
        }

        return -1;
    }
};



//Reverse Integer


class Solution {
public:
    int reverse(int x) {
        long rev = 0;

        while (x != 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        if (rev > INT_MAX || rev < INT_MIN)
            return 0;

        return rev;
    }
};





//Array Leaders




class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int mx = INT_MIN;

        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] >= mx) {
                ans.push_back(arr[i]);
                mx = arr[i];
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
