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

    int N, K, M;
    cin >> N >> K >> M;

    vector<int> L(M), R(M), S(M), E(M);
    for (int i = 0; i < M; ++i)
        cin >> L[i] >> R[i] >> S[i] >> E[i];

    long long X = 0;


    // INSERT YOUR CODE HERE


    cout << X << endl;

    return 0;
}
