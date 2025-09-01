// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> l = {10,20,30};
//     list<int> l2;
//     // l2 = l;
//     // l2.assign(l.begin(), l.end()); // l2 = l;   // ei 2ta same
//     for(int val : l2){
//         cout << val << " ";
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30};
    l.push_back(40);
    l.push_front(100);
    for(int val : l){
        cout << val << " ";
    }

    return 0;
}