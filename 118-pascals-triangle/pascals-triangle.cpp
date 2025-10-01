class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> ans;   
     vector<int> temp;
     for(int j=0; j<numRows; j++){
        vector<int> a = temp;
        for(int i =1; i<temp.size(); i++){
            temp[i] = a[i-1]+a[i];
        }
        temp.push_back(1);
        ans.push_back(temp);
     }
     return ans;

    }
};