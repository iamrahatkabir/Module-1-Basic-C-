#include<iostream>
using namespace std;

int main()
{
    int x; 
    cin >> x;
    cin.ignore(); // Using this for ignoring the "enter" value;


    char c[101];
    // cin >> s;
    // cout << s << endl;

    //Print with space
    cin.getline(c, 101);
    cout << x << endl << c << endl;

    string s;
    cin >> s;
    cout << s << endl;


    return 0;
}