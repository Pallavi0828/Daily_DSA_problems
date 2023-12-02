// Counting total number of digits in factorial of given number N

#include <bits/stdc++.h>
using namespace std;

// Using logarithmic function
int main()
{
    int N = 10;
    double sum = 0.0;
    for (int i = 1; i <= N; i++)
    {
        sum += log10(i);
    }
    cout << (1 + floor(sum));
}

// Not efficient for large numbers
// Tc=O(N)
/*
int main()
{
    int N = 10;
    int fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;

    int count = to_string(fact).length();
    cout << count;
    return 0;
}
*/