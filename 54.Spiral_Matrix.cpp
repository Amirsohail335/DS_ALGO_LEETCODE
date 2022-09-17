class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
         int minR=0;
        int minC=0;
        int maxR=matrix.size()-1;
        int maxC=matrix[0].size()-1;
        int total=matrix.size()*matrix[0].size();
        int count=1;
        while(count<=total){
            //uppar wali wall,row will remain same and col will vary
            for(int j=minC,i=minR;j<=maxC && count<=total ;j++){
                ans.push_back(matrix[i][j]);
                count++;
            }
            minR++;
            
            //right wali wall,col will remain same and row will vary
            for(int i=minR,j=maxC;i<=maxR && count<=total ;i++){
                ans.push_back(matrix[i][j]);
                count++;
            }
            maxC--;
            
            //bottom wali wall,row will remain same and col will vary
            for(int j=maxC,i=maxR;j>=minC && count<=total; j--){
                ans.push_back(matrix[i][j]);
                count++;
            }
            maxR--;
            
            //left wali wall,col will remain same and row will vary
            for(int i=maxR,j=minC;i>=minR && count<=total; i--){
                ans.push_back(matrix[i][j]);
                count++;
            }
            minC++;
        }
        return ans;
    }
};
