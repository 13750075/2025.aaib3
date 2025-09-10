//LeetCode學習計畫 大海撈針
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //用迴圈
        int H = haystack.length(), N = needle.length();
        for(int i = 0;i <= H - N; i++){//試過所有位置
            if(haystack.substr(i, N) == needle) return i;
            //從i開始剪出N個字母竟然相同
        }
        return -1;
    }
};
