// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string str = "";
    std::cout << "Provide a string without punctuation: "; getline(std::cin, str);

    int vowel_count = 0, consonant_count = 0, word_count = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
        case 'A': case 'E':  case 'O': case 'I': case 'U': case 'Y':
        case 'a': case 'e':  case 'o': case'i':  case 'u': case 'y':
            vowel_count++;
            break;
        case ' ':
            if (i != 0 && str[i - 1] != ' ') {
                word_count++;
            }
            break;
        default:
            if (str[i] >= 65 && str[i] <= 122) {
                consonant_count++;
            }
            break;

        }
    }

    std::cout << "Word count: " << word_count << std::endl;
    std::cout << "Consonant count: " << consonant_count << std::endl;
    std::cout << "Vowel count: " << vowel_count << std::endl;

    return 0;
}
