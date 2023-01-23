#include <iostream>
using namespace std;

int main() {
    int arr[] = { 1, 2, 3, 5, 6, 7, 8, 9, 10 };
    int i = sizeof(arr) / sizeof(int) - 1;
    int sort;
    for (int m = 0; m < i; m++) {
        for (int n = m + 1; n < i; n++) {
            if (arr[m] > arr[n]) {
                sort = arr[m];
                arr[m] = arr[n];
                arr[n] = sort;
            }
        }
    }
    while (i >= 0) {
        if (arr[i] - arr[i - 1] != 1) {
            cout << "The missing number is - " << arr[i] - 1;
            return 0;
        }
        i--;
    }
    return 0;
}