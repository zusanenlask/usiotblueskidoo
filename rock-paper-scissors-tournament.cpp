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

    int N, M;
    cin >> N >> M;

    vector<int> S(N);
    for (int i = 0; i < N; ++i)
        cin >> S[i];

    long long G = 0, T = 0;


    // INSERT YOUR CODE HERE


    cout << G << " " << T << endl;

    return 0;
}
