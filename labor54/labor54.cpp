#include <iostream>
#include <cmath>
using namespace std;

// 1) обчисленн€ зд≥йснюютьс€ на рекурсивному спуску, значенн€ параметра в рекурсивних викликах Ц спадаЇ;
double sumOnDescentDecreasing(int n) {
    if (n == 1)
        return sin(1) / (1 + cos(1));
    return sin(n) / (1 + cos(n)) + sumOnDescentDecreasing(n - 1);
}

// 2) обчисленн€ зд≥йснюютьс€ на рекурсивному спуску, значенн€ параметра в рекурсивних викликах Ц зростаЇ;
double helperOnDescentIncreasing(int i, int n) {

    if (i > n)
        return 0;
    return sin(i) / (1 + cos(i)) + helperOnDescentIncreasing(i + 1, n);
}

double sumOnDescentIncreasing(int n) {
    return helperOnDescentIncreasing(1, n);
}

// 3) обчисленн€ зд≥йснюютьс€ на рекурсивному п≥дйом≥, значенн€ параметра в рекурсивних викликах Ц спадаЇ;
double sumOnAscentDecreasing(int n) {
    if (n == 1)
        return sin(1) / (1 + cos(1));
    return sin(n) / (1 + cos(n)) + sumOnAscentDecreasing(n - 1);
}

// 4) обчисленн€ зд≥йснюютьс€ на рекурсивному п≥дйом≥, значенн€ параметра в рекурсивних викликах Ц зростаЇ;
double helperOnAscentIncreasing(int i, int n) {
    if (i > n)
        return 0;
    double result = helperOnAscentIncreasing(i + 1, n);
    return result + sin(i) / (1 + cos(i));
}

double sumOnAscentIncreasing(int n) {
    return helperOnAscentIncreasing(1, n);
}

// 5) обчисленн€ зд≥йснюЇтьс€ ≥терац≥йним способом
double sumIterative(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += sin(i) / (1 + cos(i));
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "1) Recursive descent decreasing: " << sumOnDescentDecreasing(N) << endl;
    cout << "2) Recursive descent increasing: " << sumOnDescentIncreasing(N) << endl;
    cout << "3) Recursive ascent decreasing: " << sumOnAscentDecreasing(N) << endl;
    cout << "4) Recursive ascent increasing: " << sumOnAscentIncreasing(N) << endl;
    cout << "5) Iterative: " << sumIterative(N) << endl;

    return 0;
}