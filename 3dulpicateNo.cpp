#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicate(vector<int> &arr){
    int i = 0 , j = i+1;

    while (i < arr.size())
    {
        
    }
    
}

// vector <int> findDulpicate(const vector<int>& arr){
//     vector<int> count(arr.size());
//     int ans = 0;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         ans = ans ^ arr[i];
//     }

//     for (int i = 0; i <= arr.size() - 1 ; i++)
//     {
//         ans = ans ^ i ;
//         count[i] = arr[i];
//     }

//     count[arr.size() - 1] = arr[arr.size() - 1];

//     //  for (int i = 0; i < arr.size(); i++) {
//     //      count[i] = arr[i];
//     // }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         std::cout << "count: " << count[i] <<std::endl;
//     }

//     std::cout << "Dulpicate element :  " << ans << std::endl;

//     return count ;  
// }

int main()
{
    vector<int> arr = {1,2,2,4,4,1};
    vector<int> result = findDuplicate(arr);
    return 0;
}
