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

    vector<int> U(N - 1), V(N - 1), W(N - 1);
    for (int i = 0; i < N - 1; ++i)
        cin >> U[i] >> V[i] >> W[i];

    int P;
    cin >> P;

    vector<int> A(P);
    for (int i = 0; i < P; ++i)
        cin >> A[i];

    int Q;
    cin >> Q;

    vector<int> B(Q);
    for (int i = 0; i < Q; ++i)
        cin >> B[i];

    int R;
    cin >> R;

    vector<int> C(R);
    for (int i = 0; i < R; ++i)
        cin >> C[i];

    vector<long long> ans(N);


    // INSERT YOUR CODE HERE


    for (int i = 0; i < N; ++i)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}
