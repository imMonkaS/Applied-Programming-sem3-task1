#pragma once

#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<double> solve(int a, int b, int c) {
    double discriminant = b * b - 4 * a * c;
    vector<double> roots;

    if (discriminant > 0) {
        roots.push_back((-b + sqrt(discriminant)) / (2 * a));
        roots.push_back((-b - sqrt(discriminant)) / (2 * a));
    }
    else if (discriminant == 0) {
        roots.push_back(-b / (2.0 * a));
    }

    sort(roots.begin(), roots.end());
    return roots;
}

void print_vector(const vector<double>& v) {
    for (vector<double>::const_iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}
