

// Subset of array or string using bit masking method...
// Given a string S, Find all the possible subsequences of the String in lexicographically-sorted order.

#include <bits/stdc++.h>
using namespace std;

vector<string> AllPossibleStrings(string s)
{

    int n = s.size();
    vector<string> ans;

    for (int i = 0; i < (1 << n); i++)
    {

        string temp = "";

        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                temp += s[j];
        }
        if (temp.size())
        {
            ans.push_back(temp);
        }
    }
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