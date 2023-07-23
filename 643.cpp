#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

//changes 

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

      int pos=0;
      double answer =0.0;
      double highest =0;
      double prev =0;
      while((pos+k)<=nums.size())
      {
           int numb = pos+k;
            // std::cout<<"pos + k: "<<numb<<std::endl;
            // std::cout<<"num elements "<<nums.size()<<std::endl;

              // std::cout<<"pos "<<pos<<std::endl;
            for(int i=pos;i<k+pos;i++)
            {
                prev += nums[i];
                // std::cout<<"what was added "<<nums[i]<<std::endl;
            }

          if(nums.size() == k)
          {
            double ans2= prev/k;
            //  std::cout<<"prev/k: "<<ans2<<std::endl; 
            return ans2; 
          }

          if(pos==0)
          {
            highest = prev;
          }  

          if(prev>highest)
          {

              highest = prev;
              //  std::cout<<"sum :"<<prev<<std::endl;
          }


          prev=0;
          pos++;
          
      }

    

      answer = highest/k;
       std::cout<<"Answer :"<<answer<<std::endl;
      return answer;

    }
};





int main()
{
    Solution n;
    int k = 3;
   //vector<int> nums ={0,1,1,3,3}; //ans 2 , k =4
   vector<int> nums = {-1,-2,-3,-4,-5};
   n.findMaxAverage(nums,k);
}