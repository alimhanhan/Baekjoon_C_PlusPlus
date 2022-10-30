#include <iostream>
using namespace std;

int n;
int f;
int a[100];
int cnt;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> f;

    for (int i = 0; i < n; i++)
    {
        if (f == a[i])
            cnt++;
    }

    cout << cnt << '\n';
}