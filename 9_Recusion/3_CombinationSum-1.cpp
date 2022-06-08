//Leetcode

class Solution {
public:
    void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
      if (ind == arr.size()) {
        if (target == 0) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds);

    }
  public:
    vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
      vector < vector < int >> ans;
      vector < int > ds;
      findCombination(0, target, candidates, ans, ds);
      return ans;
    }
};

// Code Studio

void findCombination(int ind, int n, int k, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
      if (ind == n) {
        if (k == 0) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element 
      else
        ds.push_back(arr[ind]);
        findCombination(ind+1, n, k - arr[ind], arr, ans, ds);
        ds.pop_back();
      
      findCombination(ind + 1, n, k, arr, ans, ds);
    }

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k){
      vector < vector < int >> ans;
      vector < int > ds;
      findCombination(0, n, k, arr, ans, ds);
      return ans;
    }