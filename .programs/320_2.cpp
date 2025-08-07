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
    int mid= (v.size()+1)/2;
    cout <<"vector elements:"<< v<< endl;
    while (n<=mid-1){
        sum=v[n]+v[v.size()-1-n];
        ++n;
        cout << "The sum of elements:" << sum << endl;}
    return 0;
}