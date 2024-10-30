#include <iostream>
using namespace std;

int countWays(int m, int x, int y, int z) {
    if (m == 0) {
        return 1;
    }

    if (m < 0) {
        return 0;
    }

    return countWays(m - x, x, y, z) + countWays(m - y, x, y, z) + countWays(m - z, x, y, z);
}

int main() {
    int m, x, y, z;

    cout << "enter sum m in coins: ";
    cin >> m;
    cout << "enter denominations of postage x, y, z in coins: ";
    cin >> x >> y >> z;

    int ways = countWays(m, x, y, z);
    cout << "number of ways to pay" << m << " coins: " << ways << endl;

    return 0;
}