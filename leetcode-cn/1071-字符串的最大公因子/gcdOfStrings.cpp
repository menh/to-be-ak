/*
https://leetcode-cn.com/problems/greatest-common-divisor-of-strings/

题解：
两个数的约数也是最大公约数的约数，所以就是找最大公约数对应长度的子串
*/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int iLen1 = (int)str1.length();
        int iLen2 = (int)str2.length();
        int iGcd = getGcd(iLen1, iLen2);
        string strS = str1.substr(0, iGcd);
        if(checkStr(strS, str1) && checkStr(strS, str2))
        {
            return strS;
        }
        return "";
    }

    bool checkStr(string s1, string s2)
    {
        int iTimes = s2.length() / s1.length();
        string s;
        for(int i = 0; i < iTimes; ++i)
        {
            s += s1;
        }

        return s == s2;
    }

    int getGcd(int iNum1, int iNum2)
    {
        int iGcd = min(iNum1, iNum2);
        for(; iGcd >=0; iGcd --)
        {
            if(iNum1 % iGcd == 0 && iNum2 % iGcd == 0)
            {
                return iGcd;
            }
        }
        return iGcd;
    }
};
