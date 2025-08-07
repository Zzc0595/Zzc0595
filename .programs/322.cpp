#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> text= {"Hello","world","cpp"};
    for (auto it=text.begin(); it != text.cend() && !it->empty();++it){
        for (auto c=it->begin(); c != it->cend() && !isspace(*c);++c)
            *c=toupper(*c);
    cout << *it << endl;
    }
}