#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	unordered_set<int> s;
	for(int e : arr)
	{
		if(s.find(e)==s.end())
		s.insert(e);
		else
		return e;
	}

}
