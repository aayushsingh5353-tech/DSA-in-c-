//Remove Duplicates from Array

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i = 0;

        for (int j = 1; j < arr.size(); j++) {
            if (arr[j] != arr[i]) {
                i++;
                arr[i] = arr[j];
            }
        }

        return i + 1;
    }
};




//Second Largest in Array



class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();

        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] != arr[n - 1]) {
                return arr[i];
            }
        }

        return -1;
    }
};







//  Reverse an Array

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int left =0;
        int right = arr.size() -1;
        
        while(left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};



//Missing Number in Array


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int totalSum = n * (n + 1) / 2;

        int arrSum = 0;

        for(int i = 0; i < n; i++) {
            arrSum += nums[i];
        }

        return totalSum - arrSum;
    }
};





//Segregate 0s and 1s



class Solution {
  public:
    void segregate0and1(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        while (left < right && arr[left] == 0)
            left++;

        while (left < right && arr[right] == 1)
            right--;

        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
};

















