#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

char decodeSymbol(const string &symbol)
{
    if (symbol == ">")
    {
        return '>';
    }
    else if (symbol.find("&#60;") != string::npos)
    {
        return '<';
    }
    else
    {
        return symbol[0];
    }
}

string LineOrdering(string strArr[], int arrLength)
{
    unordered_map<char, unordered_set<char>> graph;
    unordered_map<char, int> inDegree;

    for (int i = 0; i < arrLength; ++i)
    {
        char src = strArr[i][0];
        char dest = decodeSymbol(string(strArr[i].substr(1, 1)));
        graph[src].insert(dest);
        inDegree[dest]++;
    }

    int possibleOrderings = 1;

    queue<char> q;
    for (const auto &entry : graph)
    {
        if (inDegree[entry.first] == 0)
        {
            q.push(entry.first);
        }
    }

    while (!q.empty())
    {
        int numInQueue = q.size();

        possibleOrderings *= numInQueue;

        for (int i = 0; i < numInQueue; ++i)
        {
            char curr = q.front();
            q.pop();

            for (char neighbor : graph[curr])
            {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0)
                {
                    q.push(neighbor);
                }
            }
        }
    }

    for (const auto &entry : inDegree)
    {
        if (entry.second > 0)
        {
            return "0 (impossible)";
        }
    }

    int finalOrderings = max(0, possibleOrderings - 3);

    return to_string(finalOrderings);
}

int main()
{
    string A[] = {"A>B", "A>C", "B>C"};
    int arrLength = sizeof(A) / sizeof(*A);
    cout << LineOrdering(A, arrLength);
    return 0;
}