#include <iostream>
#define lower 0
#define upper 1

using namespace std;

int main()
{
    int k;
    cin >> k;
    string str;
    cin >> str;
    int fc = -1;          // former capital 前一個字母的大小寫
    int b = 0;            // big 小寫和小寫之間的大寫
    int s = 0;            // small 大寫和大寫之間的小寫
    int len = 0, ans = 0; // length 暫存字串長度
    for (int i = 0; i < str.length(); i++)
    {
        if (fc == isupper(str[i])) // 前一個和現在的字母大小寫是否相同
        {                          // 前一個和現在的字母大小寫相同
            len++;
            fc ? b++ : s++;                // 如果前一個字母是大寫，那麼大寫加一，如果前一個字母是小寫，那麼小寫加一
            if ((fc ? b : s) == k)         // 如果目前b或s的值等於k
                len > ans ? ans = len : 0; // 如果暫存字串長度大於答案，那麼答案等於暫存字串長度，否則不做事
            if ((fc ? b : s) > k)          // 如果目前b或s的值大於k
                len = k;                   // 暫存字串長度等於k(這可能是接下來交錯字串的開頭)
        }
        else
        {                         // 前一個和現在的字母大小寫不相同
            if (len % k != 0)     // 如果k不是暫存字串長度的倍數
                len = 0;          // 因為重複大小寫超過k次會改成k，所以不是k的倍數代表重複次數不足k次，歸零重計
            fc = isupper(str[i]); // 前一個字母的大小寫
            b = 0, s = 0;         // b和s改為零
            len++;                // 暫存字串長度加ㄧ
            fc ? b++ : s++;       // 將現在的字母大小寫加一
            if ((fc ? b : s) == k)
                len > ans ? ans = len : 0; // 當題目的k為1時，才會用到這個if
        }
    }
    cout << ans;
    return 0;
}