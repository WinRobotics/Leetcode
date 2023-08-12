
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <iterator>
using namespace std;


class Solution
{
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

    //what if the vectors are uneven?
    unordered_map<int,int> diff1,diff2;
    unordered_map<int,int>::iterator it1,it2;

    //filling up the key
    for(int i =0; i<nums1.size();i++)
    {
        diff1[nums1[i]];
    }

    for(int p =0; p<nums2.size();p++)
    {
        diff2[nums2[p]];
    }

    for(int z : nums1)
    {

        it1 = diff2.find(z);
        if(it1 != diff2.end())
        {
            std::cout<<"z appear : "<<z<<std::endl;
        }        
    }

    
    }
};


int main()
{

    Solution n;
    vector<int> num1 = {1,2,3};
    vector<int> num2 = {4,3,2};
    n.findDifference(num1,num2);

}