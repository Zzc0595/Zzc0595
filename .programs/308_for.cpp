#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("0");
    getline(cin,s);
    if (!s.empty()){
        //for循环        
        for(string::size_type  n=0;n<s.size();++n){
            s[n]='X';}
    }
    cout << s <<endl;
    return 0;
}