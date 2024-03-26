#include <iostream>

using namespace std;

int sumOfSeries(int n) {
    int totalSum = 0;
    for (int i = 1; i <= n; ++i) {
        int termSum = 0;
        for (int j = 1; j <= i; ++j) {
            termSum += j;
        }
        totalSum += termSum;
    }
    return totalSum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int result = sumOfSeries(n);
        cout << "Sum of the series is: " << result << endl;
    }

    return 0;
}

