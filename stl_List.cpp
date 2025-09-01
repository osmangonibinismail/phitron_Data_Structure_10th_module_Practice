// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> l(10,3);
//     // for(auto it = l.begin(); it!=l.end(); it++){
//     //     cout << *it << endl;
//     // }

//     for(int val : l){
//         cout << val << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> l = {2, 4, 6, 10, 12};

//     list<int> l2(l);

//     for(int val : l2){
//         cout << val << " ";
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> l = {2, 4, 6, 10, 12};
//     int a[] = {10, 20, 30};
//     list<int> l2(a, a + 3);

//     for (int val : l2)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {2, 4, 6, 10, 12};
    vector<int> v = {10, 40,30};
    list<int> l2(v.begin(), v.end());

    for (int val : l2)
    {
        cout << val << " ";
    }
    return 0;
}