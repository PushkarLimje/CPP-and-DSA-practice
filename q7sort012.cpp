#include <iostream>
#include <vector>
using namespace std;

// vector<int> sortArray(vector<int>& arr) {
//     int low = 0, mid = 0;
//     int high = arr.size() - 1;

//     // Dutch National Flag Algorithm
//     while (mid <= high) {
//         if (arr[mid] == 0) {
//             swap(arr[low++], arr[mid++]);
//         }
//         else if (arr[mid] == 1) {
//             mid++;
//         }
//         else { // arr[mid] == 2
//             swap(arr[mid], arr[high--]);
//         }
//     }

//     return arr;
// }
vector<int> sortArray(vector<int>& arr) {
    int low = 0, mid = 0;
    int high = arr.size() - 1;

    // Dutch National Flag Algorithm
    while (mid <= high) {
        if (arr[mid] == 0 && mid <= high) {
            swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 1 && mid <= high) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high--]);
        }
    }

    return arr;
}

int main() {
    vector<int> arr = {0, 1, 0, 2, 0, 1, 0, 2};
    vector<int> sortedArr = sortArray(arr);

    for (int i = 0; i < sortedArr.size(); i++) {
        cout << sortedArr[i] << " ";
    }

    return 0;
}


// #include <iostream>
// #include<vector>

// using namespace std;

// vector<int> sortArray(vector<int>&arr){
//     int left = 0;
//     int right = arr.size()-1;
//     vector<int> ans;

//     while (left > right)
//     {
//         while (arr[left] == arr[right] || arr[left] < arr[right])
//         {
//             left++;         
//         }

//         while (arr[left] > arr[right])
//         {
//             swap(arr[left], arr[right]);
//             ans.push_back(arr[left]);
//             left++;
//             right--;

//         }
        
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {0,1,0,2,0,1,0,2};
//     vector<int> arr1 = sortArray(arr);
//     for (int i = 0; i < arr1.size(); i++)
//     {
//         cout<<arr1[i]<< " ";
//     }
    
//     return 0;
// }
