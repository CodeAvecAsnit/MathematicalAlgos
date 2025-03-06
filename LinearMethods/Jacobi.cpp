#include<iostream>
#include<cmath>
using namespace std;

float geterror(float newer, float older) {
    return fabs((newer - older) / newer);
}

int main() {
    float a[3][4];

 
    for(int i = 0; i < 3; ++i) {
        cout << "Equation number " << i + 1 << endl;
        for(int j = 0; j < 4; ++j) {
            cout << "Enter coefficient x" << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    float subarr[3] = {0, 0, 0};
    float arr[3] = {0, 0, 0};
    float maxError;

    do {
        maxError = 0; 
        for(int i = 0; i < 3; ++i) {
            subarr[i] = arr[i]; 
        }

        for(int i = 0; i < 3; ++i) {
            float sum = 0;
            for(int j = 0; j < 3; ++j) {
                if(i != j) {
                    sum += a[i][j] * subarr[j]; 
                }
            }
            arr[i] = (a[i][3] - sum) / a[i][i];
            float currentError = geterror(arr[i], subarr[i]);
            if (currentError > maxError) {
                maxError = currentError; 
            }
        }
    } while(maxError > 0.05); 

    cout << "The required values are: " << endl;
    for(int i = 0; i < 3; ++i) {
        cout << "x" << i + 1 << " : " << arr[i] << endl;
    }

    return 0;
}
