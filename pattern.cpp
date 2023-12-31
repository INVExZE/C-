#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    

    for (int row = 1; row <= 2*n-1; row++)
    {
        int total = row > n ? 2 * n - row  : row;

        for (int col = 1; col <= total; col++)
        {
            cout << " * ";
        }

        cout << endl;
        
    }
    
}