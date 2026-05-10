#include <iostream>
using namespace std;
int main() {
    string stack[3]; // A small stack of 3 spots
    int top = -1;    // -1 means it is empty
    // 1. PUSH (Adding)
    top++;
    stack[top] = "Red Plate";

    top++;
    stack[top] = "Blue Plate";
    // 2. PEEK (Looking)
    cout << "On top: " << stack[top] << endl; // Shows Blue Plate
    // 3. POP (Removing)
    cout << "Removing top..." << endl;
    top--; // We just move the marker down!
    // Show the new top
    cout << "New top: " << stack[top] << endl; // Shows Red Plate
    return 0;
}
