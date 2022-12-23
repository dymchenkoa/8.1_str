#include <iostream>
#include <string>

using namespace std;

int IsOrNot(string str)
{
    int counter = 0;
    for (int i = 0; i < str.length(); ++i)
        if (str.substr(i, 5) == "while")
        {
            ++counter;
            i += 4;
        }
    return counter;
}

string change(string& str)
{
    while (str.find("while") != -1)
        str = str.replace(str.find("while"), 5, "***");
    return str;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    int count = IsOrNot(str);
    if (count > 0)
    {
        cout << "Count of 'while': " << count << endl;
        cout << change(str);
    }
    else
        cout << "'while' is not found." << endl;
    cout << endl;
}