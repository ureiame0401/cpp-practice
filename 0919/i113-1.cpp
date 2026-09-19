#include <iostream>
using namespace std;

int main()
{
    int have = 0, money = 0;
    int d1, d2, d3, d4;
    int n;

    cin >> n;
    cin >> d1 >> d2 >> d3;

    // 第 3 天：是否已經連跌 2 天
    if (d1 > d2 && d2 > d3)
    {
        have++;
    }

    // 從第 4 天開始
    for (int d = 4; d <= n; d++)
    {
        cin >> d4;

        // 連跌 3 天 → 再買一張
        if (d1 > d2 && d2 > d3 && d3 > d4)
        {
            have++;
        }

        // 連漲 3 天 → 賣一張
        else if (d1 < d2 && d2 < d3 && d3 < d4 && have > 0)
        {
            have--;
            money += d4;
        }

        // 往前推一天
        d1 = d2;
        d2 = d3;
        d3 = d4;
    }

    // d4 是最後一天的價格
    cout << money + d4 * have;
}