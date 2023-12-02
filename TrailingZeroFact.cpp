// Total number of trailing zeros in the factorial of given number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "enter N value";
    cin >> N;
    int count = 0;
    if (N < 0)
    {
        cout << -1;
        return 0;
    }
    for (int i = 5; N / i >= 1; i *= 5)
    {
        count += N / i;
    }
    cout << count;
    return 0;
}

// time -> O(logn) , space -> O(1)