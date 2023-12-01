// Subset of array or string using bit masking method...
// Given a string S, Find all the possible subsequences of the String in lexicographically-sorted order.

#include <bits/stdc++.h>
using namespace std;

void powerset(int index, vector<string> &ans, string &temp, string &s, int n)
{
    if (index >= n)
    {
        if (temp.empty())
            return;
        else
            ans.push_back(temp);
        return;
    }
    temp.push_back(s[index]);
    powerset(index + 1, ans, temp, s, n);
    temp.pop_back();
    powerset(index + 1, ans, temp, s, n);
}

vector<string> AllPossibleStrings(string s)
{

    vector<string> ans;
    int n = s.length();
    string temp;
    if (n <= 1)
    {
        ans.push_back(s);
        return ans;
    }
    powerset(0, ans, temp, s, n);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<string> ans;
    string str = "abc";
    ans = AllPossibleStrings(str);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}