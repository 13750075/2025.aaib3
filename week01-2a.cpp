//LeetCode�ǲ߭p�e �j�����w
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�ΰj��
        int H = haystack.length(), N = needle.length();
        for(int i = 0;i <= H - N; i++){//�չL�Ҧ���m
            if(haystack.substr(i, N) == needle) return i;
            //�qi�}�l�ťXN�Ӧr�����M�ۦP
        }
        return -1;
    }
};
