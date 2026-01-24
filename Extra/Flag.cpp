#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    bool isFlag = true;

    string flag[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> flag[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if (flag[i].size() != count(flag[i].begin(), flag[i].end(), flag[i][0])) {
            isFlag = false;
            break;
        }
    }
    if (isFlag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}