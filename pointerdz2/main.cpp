#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "length of A: ";
    cin >> a;
    cout << "length of B: ";
    cin >> b;
    int A[a], B[b];
    cout << "elements of A: ";
    for (int i = 0; i < a; i++) {
        cin >> A[i];
    }
    cout << "elements of B: ";
    for (int i = 0; i < b; i++) {
        cin >> B[i];
    }
    int C[a + b];
    int k = 0;
    for (int i = 0; i < a; i++) {
        int found = 0;
        for (int j = 0; j < b; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            int dupe = 0;
            for (int l = 0; l < k; l++) {
                if (C[l] == A[i]) {
                    dupe = 1;
                    break;
                }
            }
            if (dupe == 0) {
                C[k++] = A[i];
            }
        }
    }
    for (int i = 0; i < b; i++) {
        int found = 0;
        for (int j = 0; j < a; j++) {
            if (B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            int dupe = 0;
            for (int l = 0; l < k; l++) {
                if (C[l] == B[i]) {
                    dupe = 1;
                    break;
                }
            }
            if (dupe == 0) {
                C[k++] = B[i];
            }
        }
    }
    cout << "Elements of C: ";
    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
    return 0;
}