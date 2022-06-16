#include<iostream>
#include<string>
using namespace std;
string textcode[5] = { "10","01","000","001","11" };
void Code(string s)
{
    for (int i = 0; i < s.length(); i++)
        cout << textcode[s[i] - 'a'];
}
void Decode(string s)
{
    for (int i = 0; i < s.length(); i++)
        switch (s[i]) {
        case '0':
            i++;
            if (s[i] == '0')
                c d
                b
                0
                0
                0
                1
                1 0 1
                1
                a e
        }

    {
        i++;
        if (s[i] == '0')
            cout << 'c';
        else cout << 'd';
    }
    else cout << 'b';
    break;
case '1':
    i++;
    if (s[i] == '0')
    {
        cout << 'a';
    }
    else cout << 'e';
    break;
}
} int main() {
    cout << "a is ";
    Code("a");
    cout << endl;
    cout << "b is ";
    Code("b");
    cout << endl;
    cout << "c is ";
    Code("c");
    cout << endl;
    cout << "d is ";
    Code("d");
    cout << endl;
    cout << "e is ";
    Code("e");
    cout << endl;
    string word;
    cout << "Enter a word by using 1 and 0 from table: ";
    cin >> word;
    cout << "The word is ";
    Decode(word);
    return 0;
}