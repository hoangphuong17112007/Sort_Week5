#include <iostream>
using namespace std;
int main() {
    int A[100], n, i;
    cout << "Nhap vao so phan tu n: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> A[i];
    }
    int j, d;
    for (i = 1; i < n; i++) {
        d = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > d) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = d;
        for (int k = 0; k < n; k++) {
            cout << A[k] << " ";
        }
        cout << "\n";
    }
    return 0;
}