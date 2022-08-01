#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

string encodeDuplicate(string s) {

    string ans = "";

    for (int i = 0; i < s.size(); i++) {

        s[i] = tolower(s[i]);

    }

    for (char ch : s) {
        if (count(s.begin(), s.end(), ch) > 1)
            ans += ")";
        else
            ans += "(";
    }

    return ans;
}



int main()
{
    setlocale(LC_ALL, "rus");

    int length;
    string str;

    cout << "Введите строку: ";
    getline(cin, str);

    cout << "Видоизмененная строка: ";

    cout << encodeDuplicate(str);

}


