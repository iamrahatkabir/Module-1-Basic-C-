#include <iostream>

// Using this for not writing std multiple times. This alon do all the std works;
using namespace std;

int main()
{
    int x;
    
    // How to print aschi value of a character in C++;
    char c = 'a';
    int aschi = c;

    // Taking input in C++
    // std :: cin >> x;
    cin >> x;
    
    
    // std :: cin >> c;
    // cin >> c;
    
    
    // cout << "Number = " << x  << " " << "Character aschi value = " << aschi << endl;

    // Typcasting || Print Aschi value of a character 
    cout << x  << " " << (int)c << endl;

    // Typcasting || Printing Aschi value of a Number;
    int y = 65;
    cout << (char) y << endl;


    return 0;
}