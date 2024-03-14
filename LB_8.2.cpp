#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

string RemoveBrackets(string& s)
{
    size_t start, end;
    while ((start = s.find_first_of("(")) != string::npos &&
        (end = s.find_last_of(")")) != string::npos &&
        start < end)
    {
        s.erase(start, end - start + 1);
    }
    return s;
}

int main()
{
    SetConsoleOutputCP(1251);
    string str;
    cout << "Введіть рядок:" << endl;
    getline(cin, str);
    cout << "Рядок після видалення символів між дужками: " << RemoveBrackets(str) << endl;
    return 0;
}
