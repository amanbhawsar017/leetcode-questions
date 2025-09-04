#include <iostream>
using namespace std;

void rowsum(int arr[3][3]) {
    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for (int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        cout << "Sum of row " << row + 1 << ": " << sum << endl;
    }
}

int main() {
    int arr[3][3];

    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cin >> arr[row][col];  // Row-wise input
        }
    }

    cout << "\nThe 2D array is:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "\nRow-wise sums:" << endl;
    rowsum(arr);  // Just call the function
}
