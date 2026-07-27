class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string merged_string = "";

        while( i < min(word1.length(),word2.length()) ){
            merged_string += word1[i];
            merged_string += word2[i];
            i++;
        }
        while( i < word1.length() ){
            merged_string += word1[i];
            i++;
        }
        while( i < word2.length() ){
            merged_string += word2[i];
            i++;
        }
    return merged_string;
    }
};