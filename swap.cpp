#include <iostream>
using namespace std;

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
}
void swap(int arr[], int ArraySize){
    for (int i = 0; i < ArraySize; i+=2)
    {
        if (i+1 < ArraySize)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
int main()
{
    int even[8]= {9,7,6,4,3,1,8,2};
    int odd[9]= {1,2,3,4,5,6,7,8,9};

    swap(odd,9);
    display(odd,9);

    return 0;
}
