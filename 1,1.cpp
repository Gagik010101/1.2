
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int i, j, n, choice;
    char str[100];
    cout << "Enter the text - ";
    cin.getline(str, 100);
    string msg = str;
    cout << "Enter the size of square matrix - ";
    cin >> n;
    cout << "1. Encryption \n2. Decryption \n";
    cin >> choice;
    if (choice == 1) {
        int m = 0;
        char mat[5][5];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (m < msg.length()) {
                    mat[i][j] = msg[m];
                }
                else {
                    mat[i][j] = '\0';
                }
                m++;
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cout << mat[i][j] << "  ";
            }
            cout << endl;
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (mat[j][i] != '\0') {
                    cout << mat[j][i];
                }
                else {
                    cout << '_';
                }
            }
        }
    }
    else if (choice == 2) {
        int m = 0;
        char mat[5][5];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (m < msg.length()) {
                    mat[j][i] = msg[m];
                }
                else {
                    mat[j][i] = '\0';
                }
                m++;
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cout << mat[j][i] << "  ";
            }
            cout << endl;
        }
        for (j = 0; j < n; j++) {
            for (i = 0; i < n; i++) {
                if (mat[j][i] != '\0') {
                    cout << mat[j][i];
                }
                else {
                    cout << '_';
                }
            }
        }
    }
    return 0;
}