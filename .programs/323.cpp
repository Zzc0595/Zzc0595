#include <iostream>
#include <vector>
#include <vectorio.h>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v {1,2,3,4,5,6,7,8,9,10};
    
    for(auto it=v.begin();it != v.end();++it)
        *it=2*(*it);
    cout << v <<endl;
}