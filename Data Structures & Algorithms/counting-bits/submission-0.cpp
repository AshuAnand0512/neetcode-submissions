class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output(n+1 , 0);
        for( int i = 1;i<=n;i++){
            output[i] = countSetBits(i);
        }
    return output;
    }

    public:
        int countSetBits(int nums){
                int count = 0;
            while(nums!=0){
                count++;
                nums = nums & (nums - 1);
            } 
            return count;
        }
};
