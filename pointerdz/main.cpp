#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "length of A: ";
    cin >> a;
    cout << "lenght of B: ";
    cin >> b;
    int* A = new int[a];
    int* B = new int[b];
    cout << "elements of A: ";
    for (int i = 0; i < a; ++i) {
        cin >> A[i];
    }
    cout << "elements of B: ";
    for (int i = 0; i < b; ++i) {
        cin >> B[i];
    }
    int* c = new int[a];
    int c_size = 0;
    for (int i = 0; i < a; ++i) {
        int j;
        for (j = 0; j < b; ++j) {
            if (A[i] == B[j]) {
                break;
            }
        }
        if (j == b) {
            int k;
            for (k = 0; k < c_size; ++k) {
                if (c[k] == A[i]) {
                    break;
                }
            }
            if (k == c_size) {
                c[c_size++] = A[i];
            }
        }
    }
    cout << "Elements of C: ";
    for (int i = 0; i < c_size; ++i) {
        cout << c[i] << " ";
    }
    return 0;
}
