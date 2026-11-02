// Write a program that uses a loop to display the characters for each ASCII code 32 through 127. 
// Display 16 characters on each line with one space between characters.

#include <iostream>

using namespace std;

int main() {
    int count = 0; // Tracks characters printed in the current line

    // Loop through ASCII codes 32 through 127
    for (int i = 32; i <= 127; ++i) {
        // Cast the integer ASCII code to a char and print it with a space
        cout << static_cast<char>(i) << ' ';

        count++;

        // After printing 16 characters, insert a newline and reset the counter
        if (count == 16) {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}