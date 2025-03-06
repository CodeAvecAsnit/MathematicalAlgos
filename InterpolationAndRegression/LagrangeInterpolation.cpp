#include <iostream>
#include <vector>

using namespace std;

class Lag {
private:
    vector<double> x;
    vector<double> y;
    int size;
    double X; 

public:
    Lag(int n, double v) : size(n), X(v) {
        x.resize(n);
        y.resize(n);
    }

    void getData() {
        for (int i = 0; i < size; ++i) {
            cout << "Enter X" << i << " : ";
            cin >> x[i];
            cout << "Enter F(X" << i << ") : ";
            cin >> y[i];
        }
    }

    void evaluate() {
        double ans = 0.0;
        for (int i = 0; i < size; ++i) {
            double data = 1.0;
            for (int j = 0; j < size; ++j) {
                if (i != j) {
                    data *= (X - x[j]) / (x[i] - x[j]);
                }
            }
            ans += data * y[i];
        }
        cout << "The required term is : " << ans << endl;
    }
};

int main() {
    int size;
    double x;

    cout << "Enter the no of points : ";
    cin >> size;

    cout << "Enter the value of X that you want to find the interpolation for : ";
    cin >> x;

    Lag l(size, x);
    l.getData();
    l.evaluate();

    return 0;
}
