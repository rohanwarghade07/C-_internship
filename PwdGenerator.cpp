#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const string uppercaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string lowercaseLetters = "abcdefghijklmnopqrstuvwxyz";
    const string digits = "0123456789";
    const string specialCharacters = "!@#$%^&*()_+-=[]{}|;:,.<>?";

    const string allCharacters = uppercaseLetters + lowercaseLetters + digits + specialCharacters;

    srand(static_cast<unsigned int>(time(0)));

    int passwordLength;
    cout << "Enter the length of the password: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cout << "Invalid password length. Please enter a positive number." << endl;
    } else {
        string password;
        for (int i = 0; i < passwordLength; ++i) {
            int randomIndex = rand() % allCharacters.length();
            password += allCharacters[randomIndex];
        }

        cout << "Generated Password: " << password << endl;
    }

    return 0;
}
