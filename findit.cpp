/*
 * Project: findit
 * Description: Finds random mathematical details needed
 * for redundant operations
 *
 * Author: kevr <kevr@nixcode.us>
*/
#include <iostream>
using namespace std;

int gcd(const int& m, const int &n)
{
    return m % n == 0 ? n : gcd(n, m % n);
}

int main(int argc, char *argv[])
{
    cout << gcd(4, 8) << endl;
    return 0;
}

