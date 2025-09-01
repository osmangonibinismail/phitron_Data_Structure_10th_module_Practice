#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {56,89,40,10,32,74,10,62,10};

    // l.remove(10);
    l.sort();
    l.unique();
    l.reverse();

    for(int val : l){
        cout << val << endl;
    }
    return 0;
}