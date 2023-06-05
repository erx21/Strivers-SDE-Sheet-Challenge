#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    if(n==1)
    return permutation;
    int i;
    for(i= n-2;i>=0;i--)
    {
        if(permutation[i]<permutation[i+1])
        break;
    }
    if (i == -1) {
      reverse(permutation.begin(), permutation.end());
      return permutation;
    }
    int j;
    for(j= n-1;j>=0;j--)
    {
        if(permutation[i]<permutation[j])
        break;
    }
// cout<<i<<" "<<j;;
    swap(permutation[i],permutation[j]);

     reverse(permutation.begin()+i+1,permutation.end());
return permutation;
    

}
