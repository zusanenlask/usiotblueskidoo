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

    int N, M, E;
    cin >> N >> M >> E;

    vector<int> A(E), B(E);
    for (int i = 0; i < E; ++i)
        cin >> A[i] >> B[i];

    vector<int> P(N);
    vector<int> Q(M);


    // INSERT YOUR CODE HERE


    for (int i = 0; i < N; ++i)
        cout << P[i] << " ";
    cout << endl;
    for (int i = 0; i < M; ++i)
        cout << Q[i] << " ";
    cout << endl;

    return 0;
}
