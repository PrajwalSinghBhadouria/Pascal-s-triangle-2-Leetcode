class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        vector<vector<int>> ans;
        v.push_back(1);
        ans.push_back(v);
        v.clear();
        int p=0;
        for(int i=1; i<rowIndex+1; i++){
            v.push_back(1);
            for(int j=0; j<p; j++){
                v.push_back(ans[i-1][j]+ans[i-1][j+1]);
            }
            v.push_back(1);
            ans.push_back(v);
            p++;
            v.clear();
        }
        for(int i=0; i<rowIndex+1; i++){
            v.push_back(ans[rowIndex][i]);
        }

        return v;
    }
};
