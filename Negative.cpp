#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int num;

    // Input the negative number
    cout << "Enter a negative number: ";
    cin >> num;

    // Convert negative number to binary using a while loop
    cout << "Binary representation: ";
    int bitCount = sizeof(num) * 8; // Number of bits in an integer
    
    
    for (int i = bitCount - 1; i >= 0; --i) {
        // Extract each bit and print it
        cout << ((num & (1 << i)) ? '1' : '0');
    }

    cout << endl;

    return 0;
}
