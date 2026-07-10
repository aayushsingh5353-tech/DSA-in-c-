//       #DSA QUESTIONS 

// @no1        Find element at a given Index

class Solution {
  public:
    int findElementAtIndex(int i, vector<int> &arr) {
        return arr[i];
        
    }
};



//    min & max array element

class Solution {
public:
    vector<int> getMinMax(vector<int> arr) {
        int mn = arr[0];
        int mx = arr[0];
        
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] < mn) mn = arr[i];
            if(arr[i] > mx) mx = arr[i];
        }
        
        return {mn, mx};
    }
};




// Sum of all elements in an array



class Solution {
  public:
    int arraySum(vector<int>& arr) {

        int sum = 0;

        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }

        return sum;
    }
};


//Sum of Digits



class Solution {
  public:
    int sumOfDigits(int n) {
        
        int sum =0;
        
        while(n>0){
            
            sum+= n%10;
            
            n/=10;
        }
        
        return sum;
    }
};





//Check if array is sorted


class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for (int i=0; i<arr.size()-1; i++){
        if (arr[i]> arr[i+1])
        return false;
    }
    return true;
    }
};





//Alternates in an Array


class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {

        vector<int> ans;

        for(int i = 0; i < arr.size(); i += 2) {
            ans.push_back(arr[i]);
        }

        return ans;
    }
};


