/**
 * @file palindrome_check.cpp
 * @brief Check if a string is a palindrome
 */

#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;
    
    if (isPalindrome(word)) {
        std::cout << word << " is a palindrome!" << std::endl;
    } else {
        std::cout << word << " is not a palindrome!" << std::endl;
    }
    return 0;
}
