	#include <iostream>
using namespace std;

int main() 
{
    char c;

    cout << "Enter an alphabet: ";
    cin >> c;


    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')

	else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')

        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}
