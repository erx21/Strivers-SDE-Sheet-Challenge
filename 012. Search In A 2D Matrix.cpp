bool searchMatrix(vector<vector<int>>& mat, int target) {

    int m = mat.size();
    if(m==0)
    return false;
    int n = mat[0].size();
    int l= 0;
    int h = m*n-1;

    while(l<=h)
    {
        int mid = (l + (h-l)/2);

        if(mat[mid/n][mid%n]==target)
        return true;
        else if(mat[mid/n][mid%n]>target)
        h= mid-1;
        else
        l= mid+1;
    }
    return false;

}
