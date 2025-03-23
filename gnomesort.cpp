// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i) cin >> P[i];

    string answer = "YES";
    int M = 0;

    // INSERT YOUR CODE HERE

    cout << answer << endl;
    cout << M << endl;
    for (int i = 0; i < M; ++i) {
        int K = 0;
        cout << K << " ";
        for (int j = 0; j < K; ++j) cout << 0 << " ";
        cout << endl;
    }

    return 0;
}
