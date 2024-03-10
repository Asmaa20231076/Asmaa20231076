//affine cipher 
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    char alpha_letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string text;
    int y;
    int z;
    cout << "Enter your plain text\n";
    getline(cin, text);
    for (int i = 0; i < text.size(); i++) {
        text[i] = tolower(text[i]);
        char mychar = tolower(text[i]);
        if (isalpha(mychar)  && !isspace(mychar)) {
            for (int j = 0; j < 26; j++) {
                if (text[i] == alpha_letters[j])
                {
                    y = (5*j + 8) % 26;
                    z = 21*((y - 8)%26 +26) % 26;
                    cout<<"     "  << alpha_letters[y] <<"    "<<alpha_letters[z]<<endl;
                }
            }
        }       else
            {
            cout << mychar;
            }
    }
return 0;
}
