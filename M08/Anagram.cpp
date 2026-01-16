#include <iostream>
#include <string.h>
using namespace std;

string toLower(string word) {
    int word_length = word.size();
    string lowered_word = "";
    for (size_t i = 0; i < word_length; i++)
    {   
        if (word[i] >= 'A' && word[i] <= 'Z'){
            // lowered_word += (word[i] + 32);
            lowered_word += (word[i] + 'a' - 'A');

        } else {
            lowered_word += word[i];
        }
    }
    return lowered_word;
}

string getAllAlph(string word) {
    int word_length = word.size();
    string new_word = "";

    for (size_t i = 0; i < word_length; i++){
        if (word[i] >= 'A' && word[i] <= 'Z' || word[i] >= 'a' && word[i] <= 'z'){
            new_word += word[i];
        }
    }

    return new_word;

}

int main() {
    string wordA, wordB;
    cin >> wordA >> wordB;
    wordA = toLower(getAllAlph(wordA)); // wordA = AbC | getAllAlph("Ab C") -> "AbC"
    wordB = toLower(getAllAlph(wordB));

    cout << wordA << endl;
    cout << wordB << endl;

    return 0;
}