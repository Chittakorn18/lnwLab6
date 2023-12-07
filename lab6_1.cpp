#include <iostream>
using namespace std;

int main() {
    const int max = 100;
    int nums[max];

    int input, countEven = 0, countOdd = 0;
    int i = 0;

    while (i < max) {
        cout << "Enter an integer: ";
        cin >> input;

        if (input != 0) {
            nums[i] = input;
            i++;
        } else {
            break;
        }
    }

    for (int z = 0; z < i; z++) {
        if (nums[z] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    cout << "#Even numbers = " << countEven << endl;
    cout << "#Odd numbers = " << countOdd << endl;

    return 0;
}
