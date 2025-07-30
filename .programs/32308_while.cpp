#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("0");
    getline(cin,s);
    if (!s.empty()){
        //while循环
        string::size_type  n=0;
        while(n<s.size()){
            
            s[n]='X';++n;}
    }
    cout << s<<endl;
    return 0;
}