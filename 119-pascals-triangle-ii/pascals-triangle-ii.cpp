class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<int> ans;
        vector<int> temp;
        rowIndex++;
        while( rowIndex!=0){
            temp = ans;
            for(int i=1; i<temp.size(); i++){
                ans[i] = temp[i]+temp[i-1];   
            }
            ans.push_back(1);
            rowIndex--;
        } 
       return ans;   
    }
};