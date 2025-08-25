#include <iostream>
#include<math.h>
using namespace std;


bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main()
{
    int number ;
    std::cout << "enter the number " << std::endl;
    cin>> number ;

    std::cout << "ans : "<< isPowerOfThree(number) << std::endl;
    return 0;
}