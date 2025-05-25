#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // if(a < b)
    // {
    //     cout << a << endl;
    // }
    // else{
    //     cout << b << endl;
    // }

    // Printing Minimum Number;
    cout << min(a,b) << endl;

    // Printing Maximum Number;
    cout << max(a,b) << endl;

    // Printing Minimum Number;
    cout << min({10, 20, 30, 40}) << endl;

    // Printing Maximum Number;
    cout << max({10, 20, 30, 40}) << endl;

    // swapping value
    swap(a,b);

    cout << a << " " << b << endl;


    return 0;
}