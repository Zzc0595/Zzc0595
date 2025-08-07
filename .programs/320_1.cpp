#include <iostream>
#include <vector>
#include <vectorio.h>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v{0};
    cin >> v;
    int n=0, sum=0;
    cout <<"vector elements:"<< v<< endl;
    while (n< v.size()-1){
        sum=v[n]+v[n+1];
        ++n;
        cout << "The sum of elements:" << sum << endl;}
    cin.get();
    return 0;
}