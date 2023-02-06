#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "enter the word:";
    cin >> word;
    char letter;
    cout << "enter the letter:";
    cin >> letter;
    bool isfound = false;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letter)
        {
            isfound = true;
            break;
        }
    }
    if (isfound == true)
    {
        cout << "letter found";
    }
    if (isfound == false)
    {
        cout << "letter not found";
    }
}