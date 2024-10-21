class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return 0;
        }

        // int h_len = haystack.length();
        // int n_len = needle.length();
        // for(int i = 0; i <= h_len - n_len; ++i){
        //     string sub_string = haystack.substr(i, n_len);
        //     if(sub_string == needle){
        //         return i;
        //     }
        // }
        // return -1;
        return haystack.find(needle);
    }
};