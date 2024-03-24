#include <iostream>
using namespace std;
int sum_of_series(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int sum_i = (i * (i + 1)) / 2;
        sum += sum_i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int result = sum_of_series(n);
    cout << "The sum of the series is: " << result << endl;
    return 0;
}