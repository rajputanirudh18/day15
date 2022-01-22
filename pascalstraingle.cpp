class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        
        for(int i=0; i<numRows; i++)
        {
            vector<int> ds;
            for(int j=0; j<=i; j++){
                if(j==0 || j==i)
                    ds.push_back(1);
                else
                     
                    ds.push_back(ans[i-1][j]+ans[i-1][j-1]);
                    
            }
            ans.push_back(ds);
            
        }
        return ans;
    }
};