// Print each number in the range specified by two integers.

#include <iostream>

using std::cout;
using std::cin;

void print_range(int lo, int hi)
{
    int i = lo;
    if (lo > hi)
    {
        print_range(hi, lo);
        return;
    }
    while(i != hi)
        cout << i++ << " ";
}

int main()
{
    int low = 0, high = 0;
    cout << "please input two integers:\n";
    cin >> low >> high;
    print_range(low, high);
    return 0;
}
