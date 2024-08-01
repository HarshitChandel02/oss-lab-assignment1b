#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;


string toLowerCase(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}


void countWordFrequencies(const string& paragraph) {
    map<string, int> wordFrequency;
    stringstream ss(paragraph);
    string word;

    while (ss >> word) {
      
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        // Convert the word to lowercase
        word = toLowerCase(word);
        
        wordFrequency[word]++;
    }

    
    cout << "\nWord Frequencies:" << endl;
    for (const auto& pair : wordFrequency) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string paragraph;

    cout << "Enter a paragraph: ";
    
    getline(cin, paragraph);

    
    countWordFrequencies(paragraph);

    return 0;
}
