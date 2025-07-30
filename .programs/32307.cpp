#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("0");
    cin >> s;
    if (!s.empty())
        for(char &c:s)
            c='X';
    cout << s;
    return 0;
}