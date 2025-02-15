//TOWER OF HAWOI
#include <iostream>
using namespace std;

// Function to solve the Tower of Hanoi puzzle
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);
    
    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    
    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n; // Number of disks
    
    cout << "Enter the number of disks: ";
    cin >> n;
    
    // Call the towerOfHanoi function with the 3 rods: A (source), B (auxiliary), and C (destination)
    towerOfHanoi(n, 'A', 'B', 'C');
    
    return 0;
}
