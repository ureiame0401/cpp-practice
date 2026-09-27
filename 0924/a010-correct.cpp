#include <iostream>
using namespace std;

int main() {
    int num;
    int t;
    int index = 0;

    cin >> num;
    int onum = num;

    for (auto i = 2; i * i <= num && i != onum; i++) {

        if (num % i == 0) {
            if (index) {
                cout << " * ";
            }

            cout << i;

            t = 0;                         // ← 移到這裡

            while (num % i == 0) {
                t++;
                num /= i;
            }

            if (t >= 2) {
                cout << "^" << t;           // ← ^ 跟次數一起處理
            }

            index++;
        }
    }

    if (num > 1) {                          // ← 0 改成 1
        if (index) {
            cout << " * ";
        }
        cout << num;
    }

    return 0;
}
