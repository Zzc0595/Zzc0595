#include <iostream>
using namespace std;
int main()
{
    unsigned long long num=0;
    cout << "Enter a number :" ;
    cin >> num;
    while (num != 1){
        if (num%2 ==1 ) {//odd
            num = 3*num +1;
            cout << num << endl;}
        if (num%2 == 0){//even
            num = num/2;
            cout << num << endl;}
    }cout << "The number returns to 1!" << endl;
}
