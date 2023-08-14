
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

    //answer
    vector<vector<int>> answer ={{0},{0}};
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

    int counter1 =0;
    for(int z : nums1)
    {

        it1 = diff2.find(z);
        if(it1 != diff2.end())
        {
            //std::cout<<"z appear : "<<z<<std::endl;
        }
        else{
            //std::cout<<"z doesn't appear : "<<z<<std::endl;
            diff2[z]++;
            if(diff2[z]>=1)
            {

                answer[0][counter1] = z;
                answer[0].push_back(0);
                counter1++;
            }

        }        
    }

    answer[0].pop_back();

    int counter2 =0;
    for(int g : nums2)
    {

        it2 = diff1.find(g);
        if(it2 != diff1.end())
        {
            //std::cout<<"g appear : "<<g<<std::endl;
        }
        else{
            //std::cout<<"g doesn't appear : "<<g<<std::endl;
            diff1[g]++;
            if(diff1[g]>=1)
            {

                answer[1][counter2] = g;
                answer[1].push_back(0);
                counter2++;

            }

        }        
    }
      answer[1].pop_back();

        return answer;
    
    }

  

};


int main()
{

    Solution n;
    vector<vector<int>> ans2;
    vector<int> num1 = {1,2,1,2};
    vector<int> num2 = {1,4,2,2};
    ans2 =n.findDifference(num1,num2);
    for(int p : ans2[0])
    {
        std::cout<<"ans[0] : "<<p<<std::endl;
    }

    for(int j : ans2[1])
    {
        std::cout<<"ans[1] : "<<j<<std::endl;
    }
}