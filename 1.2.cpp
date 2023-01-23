#include <iostream>
#include <cstring>
using namespace std;

void RLE(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        cout << count << str[i];
    }
}

int main() {
    char str[100];
    cout << "Enter the text - ";
    cin.getline(str, 100);
    RLE(str);
    return 0;
}
