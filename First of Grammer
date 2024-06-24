#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "How many Productions: ";
    cin >> n;
    cout << "Let Epsilon: $" << endl << endl;
    cout << "Enter " << n << " production rules (Example S ABC|ghi|$)" << endl;

    vector<pair<char, string>> production(n);
    vector<pair<char, set<char>>> ans(n);

    // Read production rules
    for (int i = 0; i < n; i++)
    {
        cout << (i + 1) << ". ";
        cin >> production[i].first >> production[i].second;
        ans[i].first = production[i].first;
    }

    // Compute the First sets
    for (int i = n - 1; i >= 0; i--)
    {
        char ch = production[i].first;
        string s = production[i].second;

        int len = s.size();
        bool p = true;
        for (int j = 0; j < len; j++)
        {
            if (p)
            {
                if ((s[j] >= 'a' && s[j] <= 'z') || s[j]=='$')
                {
                    // It's a terminal
                    for (auto &pair : ans)
                    {
                        if (pair.first == ch)
                        {
                            pair.second.insert(s[j]);
                            break;
                        }
                    }
                }
                else
                {
                    // It's a non-terminal
                    for (auto &pair : ans)
                    {
                        if (pair.first == ch)
                        {
                            for (auto &p : ans)
                            {
                                if (p.first == s[j])
                                {
                                    pair.second.insert(p.second.begin(), p.second.end());
                                    break;
                                }
                            }
                            break;
                        }
                    }
                }
                p=false;
            }
            else
            {
                if(s[j]=='|')
                {
                    p=true;
                }
            }
        }
    }

    // Print the First sets
    cout << "\n\nFirst Sets:\n";
    for (const auto &pair : ans)
    {
        cout << pair.first << " { ";
        for (auto it = pair.second.begin(); it != pair.second.end(); ++it)
        {
            if (it != pair.second.begin())
            {
                cout << ", ";
            }
            cout << *it;
        }
        cout << " }" << endl;
    }

    return 0;
}
