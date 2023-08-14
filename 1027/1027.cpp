#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map <int,int> map1;
        unordered_map <int,int> map2;
        vector<int> contain;
        for(int i : arr)
        {
            map1[i]++;
            //std::cout<<"internal workings : "<<map1[i]<<std::endl;
        }

      // std::cout<<map1.size()<<std::endl;

        int counter =0;
        for(const auto& keyval : map1)
        {
            contain.push_back(0);
            contain[counter] = keyval.second;
            counter++;
        }

        for(int y : contain)
        {
            map2[y]++;
        }

        for(const auto& keyval2 : map2)
        {
            if(keyval2.second >=2)
            {
                return false;
            }
        }


   
       
        return true;
    }
};

int main()
{

    vector<int> question ={1,1,2,2,2,4};
    Solution n;
    bool result = n.uniqueOccurrences(question);
    std::cout<<"result "<<result<<std::endl;

}