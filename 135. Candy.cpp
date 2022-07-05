class Solution {
public:
    int candy(vector<int>& ratings) {
        
        vector<int> candies (ratings.size());
        
        //1st condition
        fill(candies.begin(), candies.end(), 1);
        
        //2nd condition
        //left
        for(int i=1; i <candies.size(); i++){
            if(ratings[i]>ratings[i-1]){
                candies[i] = candies[i-1] + 1;
            }
        }
        
        //right
        for(int i = candies.size()-2; i >=0; i--){
            if(ratings[i]>ratings[i+1]){
                candies[i] = max(candies[i], candies[i+1] + 1);
            }
        }
        // total
        int sum = 0;
        for(int i=0; i < candies.size(); i++){
            sum+=candies[i];
        }
        
        return sum;
    }
};
