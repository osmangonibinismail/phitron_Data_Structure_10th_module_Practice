#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {56,89,40,10,32,74,10,62,10};

    cout << l.back() << endl;
    cout << l.front() << endl;

    cout << *next(l.begin(), 2);
    return 0;
}