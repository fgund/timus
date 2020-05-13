#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
#include <set>
 
using namespace std;
 
constexpr int N = 101;
 
set<string> all;
set<string> used;
map<string, int> d;
string s[N][3];
int n;
 
int main()
{    
    cin >> n;
    string enter;
    getline(cin, enter);
 
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cin >> s[i][j];
            all.insert(s[i][j]);
        }
 
        getline(cin, enter);
    }
 
    d["Isenbaev"] = 0;
    used.insert("Isenbaev");
    queue<string> q;
    q.push("Isenbaev");
 
    while(!q.empty())
    {
        string v = q.front();
        q.pop();
        int dist = d[v];
 
        for(int i = 0; i < n; ++i)
        {
            bool found = false;
            for(int j = 0; j < 3; ++j)
                found |= (s[i][j] == v);
 
            if(found)
            {
                for(int j = 0; j < 3; ++j)
                {
                    string to = s[i][j];
                    if(used.find(to) == used.end())
                    {
                        used.insert(to);
                        q.push(to);
                        d[to] = dist + 1;
                    }
                }
            }
        }
    }
 
    for(set<string>::iterator it = all.begin(); it != all.end(); it++)
    {
        string name = *it;
        cout << name << ' ';
        if(used.find(name) == used.end())
            cout << "undefined" << endl;
        else
            cout << d[name] << endl;
    }
 
    return 0;
}