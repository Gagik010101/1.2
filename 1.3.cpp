#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cout << "Enter the message - ";
    char msg[100];
    cin.getline(msg, 100);
    int i, choice, key;
    cout << "Enter the key - ";
    cin >> key;
    cout << "1. Encryption \n2. Decryption \n";
    cin >> choice;
    if (choice == 1) {
        char ch;
        for (int i = 0; i < strlen(msg); ++i) {
            ch = msg[i];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch + key;
                if (ch > 'z') {
                    ch = ch - 'z' + 'a' - 1;
                }
                msg[i] = ch;
            }
            else if (ch >= 'A' && ch <= 'Z') {
                ch = ch + key;
                if (ch > 'Z') {
                    ch = ch - 'Z' + 'A' - 1;
                }
                msg[i] = ch;
            }
        }
        cout << "Encrypted message - " << msg;
    }
    else if (choice == 2) {
        char ch;
        for (int i = 0; i < strlen(msg); ++i) {
            ch = msg[i];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - key;
                if (ch < 'a') {
                    ch = ch + 'z' - 'a' + 1;
                }
                msg[i] = ch;
            }
            else if (ch >= 'A' && ch <= 'Z') {
                ch = ch - key;
                if (ch < 'A') {
                    ch = ch + 'Z' - 'A' + 1;
                }
                msg[i] = ch;
            }
        }
        cout << "Decrypted message - " << msg;
    }
}