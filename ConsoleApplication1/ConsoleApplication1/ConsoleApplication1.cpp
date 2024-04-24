#include <iostream>
#include <string>
#include "WordFrequancy.h"
using namespace std;
int main() {
    string paragraph;

    cout << "Enter the sentence: ";
    getline(cin, paragraph);
    WordFrequancy wordFrequancy = WordFrequancy(paragraph);
    wordFrequancy.workFlow(paragraph);
    return 0;
}

