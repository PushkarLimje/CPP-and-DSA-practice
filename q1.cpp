#include <iostream>

// find single digit of the number and then take the differece of product - sum ;

int main()
{
    int number = 981 ;
    
    int arr[3] = {};
    int sum= 0, product =1 ;
    int difference ;

    for (int index  = 0; index  <= 2   ; index ++)
    {
        int value = number % 10 ;
        arr[index] = value ;
        number /= 10; 

    }
    
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
        product *=arr[i];
    }
    difference = product -sum;
    std::cout << difference  << std::endl;

    return 0;
}
