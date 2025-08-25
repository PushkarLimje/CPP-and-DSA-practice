#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int>&arr1  , vector<int>&arr2){

    vector<int> ans;
    //O(N) = time complexity
    //This approach uses the two-pointer technique which works only if both arrays are sorted.
    int i = 0,j=0;
    while (i < arr1.size()&& j < arr2.size())
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if (arr1[i] < arr2[j])
        {
            i++;
        }else{
            j++;
        }
        
        
    }
    
    //O(N sq) = time complexity
    // for (int i = 0; i < arr1.size(); i++)
    // {
    //     int element = arr1[i];
    //     for (int j = 0; j < arr2.size(); j++)
    //     {
    //         if (element < arr2[j] || element> arr2[j])  
    //         {
    //             break; 
    //         }            
    //         if (element == arr2[j])
    //         {
    //             ans.push_back(arr1[i]);  // to add in vector ans
    //             arr2[j] = -1;
    //             break;
    //         }           
    //     }        
    // }
    
    return ans;
}

int main()
{
    vector<int> arr1 = {1,4,16,25,36,49,64};
    vector<int> arr2 = {25,499};
    vector<int> arr3 = findArrayIntersection(arr1,arr2);

    

    if (arr3.size() == 0)
    {
        cout<<"NO INTERSECTION :  "<<-1;
    }else{
        for (int i = 0; i < arr3.size(); i++)
            {
                std::cout << " Intersection:  "<< arr3[i] << std::endl;
            }
    }
    
    
    return 0;
}
