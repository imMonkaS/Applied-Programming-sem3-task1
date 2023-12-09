#include "functions.h"

int main() {
    cout << "Enter arguments for equation: " << endl;
    int a, b, c;
    cin >> a >> b >> c;
    vector<double> roots = solve(a, b, c);
    cout << "Answer is: ";
    print_vector(roots);

    return 0;
}