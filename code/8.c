#include <stdio.h>
#include <string.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to count the number of anagrams
int countAnagrams(char word[]) {
    int length = strlen(word);
    int count[26] = {0}; // Array to store the count of each character

    // Count the occurrences of each character in the word
    for (int i = 0; i < length; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            count[word[i] - 'a']++;
        } else if (word[i] >= 'A' && word[i] <= 'Z') {
            count[word[i] - 'A']++;
        }
    }

    int totalAnagrams = factorial(length);

    // Divide by the factorial of the count of each character
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1) {
            totalAnagrams /= factorial(count[i]);
        }
    }

    return totalAnagrams;
}

int main() {
    char word[15];
    printf("Input word: ");
    scanf("%s", word);

    int numberOfAnagrams = countAnagrams(word);
    printf("Number of anagrams: %d\n", numberOfAnagrams);

    return 0;
}
