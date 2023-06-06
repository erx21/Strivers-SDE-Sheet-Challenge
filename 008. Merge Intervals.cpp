#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
  // Write your code here.
  vector<vector<int>> ans;
  vector<int> curr;

  sort(intervals.begin(), intervals.end());
  curr = intervals[0];

  for (int i = 1; i < intervals.size(); i++) {
    if (curr[0] == intervals[i][0]) {
      curr[1] = max(curr[1], intervals[i][1]);
    } else {
      if (intervals[i][0] > curr[1]) {
        ans.push_back(curr);
        curr = intervals[i];
      } else {
        curr[1] = max(curr[1], intervals[i][1]);
      }
    }
  }

  ans.push_back(curr);
  return ans;
}
