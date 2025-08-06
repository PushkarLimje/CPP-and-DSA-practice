#include <iostream>
#include<string>
//longest string but having some error in applying condition 
using namespace std;

int main()
{
    string  s = "pwwkew";
    char arr[ s.length() + 1 ];

    for (size_t i = 0; i < s.size(); ++i )
    {
        arr[i] = s[i];
    }
    
    arr[s.size()] = '\0'; 


    int count = 0 ;
    bool found_dup = false;

    for (size_t i = 0; i < s.size(); i++)
    {
        bool is_dup = false;
       
        for (size_t j = 0; j < i; j++)
        {       
            if(arr[i] == arr[j]){
                is_dup = true ;
                break;
            }
        }

        if (is_dup)     
        {
            found_dup = true;
            break;
        }
        
        if (!found_dup && count == s.size()) {
        count = 1;

        }

        count++;
        
    }
    std::cout << "count: " <<count<< std::endl;

    return 0;
}

