#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;



class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

      int pos=0;
      int pos_init =0;
      double answer =0.0;
      double highest =0;
      double prev =0;

      if(nums.size()==1)
      {
        // std::cout<<"Answer :"<<nums[0]<<std::endl;
        return nums[0];
      }

      for(int i=0;i<k;++i)
      {
        std::cout<<"add "<<nums[i]<<std::endl;
        highest+=nums[i];
      }

      std::cout<<"sum "<<highest<<std::endl;
      prev = highest;
      
      while((pos+k)<nums.size())
      {
        prev= prev-nums[pos];
        std::cout<<"sum2 "<<prev<<std::endl;
        prev= prev + nums[pos+k];
        std::cout<<"sum3 "<<prev<<std::endl;
        pos++;
        if(prev>highest)
        {
          highest = prev;
          std::cout<<"highest"<<highest<<std::endl;
        }
      }
      

    

      answer = highest/k;
        std::cout<<"Answer :"<<answer<<std::endl;
      return answer;

    }
};





int main()
{
    Solution n;
    int k = 4;
   //vector<int> nums ={0,1,1,3,3}; //ans 2 , k =4
   vector<int> nums = {1,12,-5,-6,50,3};
   n.findMaxAverage(nums,k);
}