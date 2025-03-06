#include<iostream>
using namespace std;

int main() {
    float a[3][4];

    for(int i = 0; i < 3; ++i) {
        cout << "Equation number " << i + 1 << endl;
        for(int j = 0; j < 4; ++j) {
            cout << "Enter coefficient x" << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 3; ++i) {
        float pivot = a[i][i];
        for(int j = i; j < 4; ++j) {
            if(pivot) a[i][j] /= pivot;
        }

        for(int k = 0; k < 3; ++k) {
            if(k != i) {
                float factor = a[k][i];
                for(int j = 0; j < 4; ++j) {
                    a[k][j] -= factor * a[i][j];
                }
            }
        }
    }

    cout << "The required values are: " << endl;
    for(int i = 0; i < 3; ++i) {
        cout << "x" << i + 1 << ": " << a[i][3] << endl;
    }

    return 0;
}
