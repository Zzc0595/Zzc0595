#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    if (!s.empty()){
        for(auto &c : s){
            if (ispunct(c)){
                c=' ';
            }
        }
        cout << s;
    }else{
        cout <<"Please enter some text.";
    }
    return 0;
}