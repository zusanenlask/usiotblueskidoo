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

    int X, Y;
    cin >> X >> Y;

    char winner = 'C';
    int new_X = 0, new_Y = 0;

    // INSERT YOUR CODE HERE

    // print the winner
    cout << winner << endl;
    cout.flush();

    // while there is no winner, print your move and read the opponent's move
    cout << new_X << " " << new_Y << endl;
    cout.flush();
    cin >> X >> Y;

    return 0;
}
