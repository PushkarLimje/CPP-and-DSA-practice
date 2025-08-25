#include <iostream>
using namespace std;

//checking of unique occurence 

bool uniqueOccurence(int arr[], int size){
    
    int count[size];
    for (int index = 0; index < size; index++)
    {
    
        int temp = 1;

        for (int i = (index + 1); i < size; i++)
        {
            bool copy = false;
            for (int  k = index - 1;  k >= 0 ; k--){
                if (arr[index]== arr[k])
                {
                    copy = true;
                   break;                
                }               
            }

            if (copy)
            {
                continue;
            }
            

            if (arr[index] == arr[i])
            {
                temp++;
            }
        }
        
        count[index] = temp ; 

    }
   for (int  i = 0; i < size; i++)
   {
     for (int j = i+1; j < size ; j++)
     {
        if (count[i] == count [j]){
           return false ;
        } else {
           return true;
     }
    }
         
   }
   
}

int main()
{
    int arr[9]= {1,1,2,2,3,0,7,5,6};
    int brr[7]= {4,4,2,1,1,1,0};
    
    std::cout << "Answer: " << uniqueOccurence(arr, 9) << std::endl;
    return 0;
}
